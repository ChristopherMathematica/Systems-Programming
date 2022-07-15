/* Christopher Yonek
   CSC:210 - Dr. Roosen
   Final Exam: Blackjack
   5/18/2022
*/

typedef struct card {
    int rank;
    char suit;
    struct card *next; /* have to use 'struct card' because the typedef isn't "ready" yet */
} cardT;


/* 
This function allocates space for a struct card, assign appropriate member values, and return a pointer 
to the new cardT. If suit is not one of "CDHS" (upper case), or rank is not between 1 and 13 (inclusive), 
makeCard should return NULL.
*/

cardT* makeCard(int rank, char suit){
	cardT *c = NULL;
	if(rank < 1 || rank > 13)
		return NULL;
	if(!(suit == 'C' || suit == 'D' || suit == 'H' || suit == 'S'))
		return NULL;
	
	c = (cardT *) malloc(sizeof(cardT));
	c->rank = rank;
	c->suit = suit;
	c->next = NULL;
	return c;
}

/*
This function should place card at the top of pile., and return the new head of the pile. If card is NULL, do nothing 
and return the existing head.
*/

cardT *addToPile(cardT *pile,cardT *card){
if(card == NULL){
    return pile;
}
cardT *newCard = card;
newCard ->next=pile;
return newCard;
}

/*This function should link a list of 52 cardTs, one of each combination of rank 1-13 and suit C, D, H, or S and return 
the head of the list.
*/

cardT *makeDeck() {
    cardT *top = NULL;
    cardT *temp = NULL;

    for (int i = 1; i < 14; ++i) {
         temp = makeCard(i, 'C');
         temp->next = top;
         top = temp;
         
         temp = makeCard(i, 'D');
         temp->next = top;
         top = temp;
         
         temp = makeCard(i, 'H');
         temp->next = top;
         top = temp;
         
         temp = makeCard(i, 'S');
         temp->next = top;
         top = temp;
    }

    return top;
}

/*
This function should sum up the ranks of the cards in the pile, with 11, 12, and 13 all counting for 10 points and all other cards 
counting for their rank. See the countPile function in card.c (in the "D0-blackjack" directory in the "activities" repository) for 
a way to loop over all cards in a pile.
*/

int totalPile(cardT *pile) {
    cardT *curCard = pile;

    int points = 0;

    while (curCard != NULL) {
        if (curCard->rank > 10) {
            points += 10;
        }
        else {
            points += curCard->rank;
        }
        curCard = curCard->next;
    }

    return points;
}

/*
This function should display every card in the pile as RankSuit, with each card separated by a space.
*/

void showPile(cardT *pile) {
    cardT *curCard = pile;

    while (curCard != NULL) {
        
        printf("%d%c ", curCard->rank, curCard->suit);
        curCard = curCard->next;
    }
    printf("\n");
}

/*
This function should find the last card in the pile, unlink that card from the list, and return a pointer to the found card. 
*/

cardT *deal(cardT *pile) {
    if (pile == NULL || pile->next == NULL) {
        return pile;
    }

    cardT *curCard = pile;
    cardT *prevCard = NULL;

    while (curCard->next != NULL) {
        prevCard = curCard;
        curCard = curCard->next;
    }

    // unlink the card
    prevCard->next = NULL;

    // return the pointer to last card
    return curCard;

}

/*
This function should have the user enter a word. If the word starts with 'h' (upper or lower case), return 'h'. If the word starts 
with 's' (upper or lower case), return 's'. Otherwise it should ask again until an acceptable response is entered.
*/

char hitOrStand(void){
 int c = 0;
 c = getchar();
 if(c == 'h'){
return c;
}
if(c == 'H'){
    return 'h';
}
if(c== 's'){
    return c;
}

if(c=='S'){
    return 's';
}

if(c=='c'){
    return 's';
}

if(c=='F'){
    return 'h';
}
return (char) c;
}

/*
This function should free the memory of all the cards in pile
*/

void freePile(cardT *pile) {
    cardT *curCard = pile;
    cardT *temp = NULL;

    while (curCard != NULL)
    {   
        temp = curCard;
        curCard = curCard->next;
        free(temp);
    }
}
