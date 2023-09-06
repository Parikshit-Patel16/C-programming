/*Box layout selection using Bit field
1:-Box is opaque(default) or Transparent
2:-Box fill coloue can be("black","red","green","yellow","blue","magenta","cyan","white")
3:-Box border is shown(default) or not shown
4:-Border Colour Can be anyone from fill colour
5:-Border style is Solid,Dotted or Dashed(default)
*/ 
#include<stdio.h>
#include<stdbool.h>

#define SOLID 0
#define DOTTED 1
#define DASHED 2

#define BLACK 0
#define RED 1
#define GREEN 2
#define YELLOW 3
#define BLUE 4
#define MAGENTA 5
#define CYAN 6
#define WHITE 7

char * colour[8]={"black","red","green","yellow","blue","magenta","cyan","white"};
char * style[3]={"solid","Dotted","Dashed"};
	 struct box
	 {
		bool opaque                : 1;
		unsigned int fill_colour   : 3;
		unsigned int               : 4;
		bool show_border           : 1;
		unsigned int border_colour : 3;
		unsigned int border_style  : 2; 
		unsigned int               : 2;
	 };
void show(const struct box *bp)
{
	printf("Box is %s.\n",bp->opaque == true?"Opaque":"Transparent");
	printf("The fill colour is %s.\n",colour[bp->fill_colour]);
	printf("Border %s.\n",bp->show_border == true?"Shown":"Not Shown");
	printf("The border colour is %s.\n",colour[bp->border_colour]);
	printf("Border style is %s.\n",style[bp->border_style]);
}

int main()
{
	struct box b1={true,YELLOW,true,GREEN,DASHED};
	printf("Default box Setting\n");
	show(&b1);
	
	printf("\nUpdated box Setting\n");
	b1.opaque=false;
	b1.fill_colour=WHITE;
	b1.show_border=false;
	b1.border_colour=BLUE;
	b1.border_style=SOLID;
	show(&b1);
}
	 
