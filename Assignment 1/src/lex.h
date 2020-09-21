#define EOI			0	/*	End of input	*/
#define SEMI		1	/*	; 				*/
#define PLUS		2	/*	+ 				*/
#define TIMES		3	/*	* 				*/
#define LP			4	/*	(				*/
#define RP			5	/*	)				*/
#define NUM_OR_ID	6	/*	Decimal Number or Identifier */
#define MINUS		7	/*	- 				*/
#define DIV			8	/*	/ 				*/
#define LT			9	/*	< 				*/
#define GT			10	/*	> 				*/
#define EQUAL		11	/*	= 				*/
#define IF			12   /*	if              */
#define THEN 		13   /* then            */
#define WHILE 		14   /* while           */
#define DO 			15   /* do              */
#define BEGIN 		16   /* begin           */
#define END			17   /* end				*/
#define ID 			18   /* Identifier		*/
#define COL 		19   /*	:				*/

/* in lex.c	*/
extern char *yytext;
extern int yyleng;
extern int yylineno;

int lex(void);
int match(int);
void advance(void);
