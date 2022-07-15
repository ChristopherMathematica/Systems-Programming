/* Christopher Yonek
   CSC:210 - Dr. Roosen
   Final Exam: Blackjack
   5/18/2022
*/

/* Directions: 
Define a main() to play the blackjack as described. All memory must be released before the program exits.
The following functions have already been defined as described in the rest of the assignment and should be used!
Do not redefine here any of the below functions or replicate their functionality inside your main()!
*/

int main(){
    cardT *deck = makeDeck();
    cardT *dealersPile = deal(deck);
    cardT *playersPile = NULL;
    char gameState; int k = 0;

    printf("Dealer:%d%c\n",dealersPile->rank,dealersPile->suit);
    playersPile = addToPile(playersPile,deal(deck));
   while(1){
       if(totalPile(playersPile)>21){printf("Lost!"); exit(0);}
       if(totalPile(playersPile)==21){
           dealersPile = addToPile(dealersPile,deal(deck));
           printf("Dealer:");
           showPile(dealersPile);
           printf("Won!"); exit(0);}
       playersPile = addToPile(playersPile,deal(deck));
       gameState = hitOrStand();
       printf("Player:");
       showPile(playersPile);
       if(gameState == 's'){break;}
       k++;
    }
    
       while(1){ //Simulate Do{...}while()
       if(totalPile(dealersPile)>21){printf("Won!"); exit(0);}
       dealersPile = addToPile(dealersPile,deal(deck));
       printf("Dealer:");
       showPile(dealersPile);
       if(totalPile(dealersPile)>=17){break;}
    }
    
    if(totalPile(dealersPile)>21){printf("Won!"); exit(0);}
    
    if(totalPile(dealersPile)>=totalPile(playersPile)){
        printf("Lost!");
    }else{ printf("Won!");}

//}  End Code
    
    int i; //ShuffleCheck & MemoryAllocation
    for(i=0;i<8;i++){
        shuffle(deck);
    }
    freePile(deck);
    freePile(playersPile);
    freePile(dealersPile);
    return 0;
}
