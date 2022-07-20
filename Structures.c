/* Christopher Yonek
   CSC:210 - Dr. Roosen
   Structures
   4/30/2022
*/

typedef struct {
    float length;
    int strings;
    char *name;
} instrument;

// A variable vio has been defined and initialized as an instrument. Print its variables.

printf("The %d-string %s is %dcm long.", vio.strings,vio.name,(int)vio.length);

instrument *vio_p;
instrument *get_vio(int s, char *n, float l);
//Print line like: "The 4-string violin is 36cm long."
printf("The %d-string %s is %dcm long.", vio_p->strings, vio_p->name, (int) vio_p->length);

typedef struct {
    int legs;
    char *sound;
    char *name;
} pet_t;

typedef struct {
    char *name;
    int age;
    pet_t *pet;
} owner_t;

owner_t *kid;
owner_t *get_owner(char *,int,pet_t *);
pet_t *get_pet(char *name, char *sound, int legs);
//Print a line like: "Julie's pet parrot has 2 legs and says, "squawk"."
printf("%s's pet %s has %d legs and says, \"%s\".", kid->name, kid->pet->name, kid->pet->legs, kid->pet->sound);

/* A structure chair with members legs, height, and color, each with appropriate types. */

typedef struct {
    int legs;
    float height;
    char *color;
} chair;

/* This function distance that consumes two "points" and returns the distance between them. */

typedef struct {
    float x;
    float y;
    float z;
} point;

float distance(point m, point n){
	float result;
	result = sqrt((m.x - n.x) * (m.x - n.x) + (m.y - n.y) *(m.y - n.y)+(m.z-n.z)*(m.z-n.z));
	return result;
}

/* A function finalscore that consumes a structure for a student and returns the course score. */

typedef struct {
    float homework;
    float midterm1;
    float midterm2;
    float finalexam;
} student;

float finalscore(student s) {
    return (s.homework + s.midterm1 + s.midterm2 + s.finalexam) / 4;
}

/* A function evaluate that consumes a pointer-to-quadratic and a float x, and returns the value of the quadratic at x. */
typedef struct {
    float a;
    float b;
    float c;
} quadratic;

float evaluate(quadratic *q, float x) {
    return (q->a * x * x) + (q->b * x) + q->c;
}

/* A function generate that consumes two floats and returns a pointer-to-quadratic with zeros at the given floats */
quadratic* generate (float x1, float x2){
   quadratic* quad = (quadratic*) malloc (sizeof(quadratic));
   quad->a = 1;
   quad->b = -(x1 + x2);
   quad->c = x1 * x2;
  
   return quad;
}
