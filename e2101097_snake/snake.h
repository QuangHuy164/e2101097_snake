#pragma once
// a header file usally consists of 3 sections : constant definition, 
// data structure definition, function declarations 
#define MAXLINE 50
enum INITCOORD{INITCOL=40, INITROW=13};
enum ARROW{UP=72, LEFT=75,RIGHT=77,DOWN=80};
// structure definition
struct coord {
	int x, y;
};

struct snake {
	int length;
	struct coord head;
	struct coord body[MAXLINE];
};

// function declaration 
struct snake intit_snake(int len);
void draw(struct snake s);
int input_key(void);
struct snake move(struct snake s, int k);
