#include <stdio.h>

main()
{
	/* δημιουργια μεταβλητης τυπου file*/
	FILE *in;
	in =fopen("xxx.in","r");
	
	int times,c,max=0,child=0;
	fscanf(in,"%d",&times);
	times-=1;
	int dat[times];
	for(c=0;c<=times;c++) fscanf(in,"%d",(dat+c));
	for(c=0;c<=times;c++) if(*(dat+c) > max) max=*(dat+c),child++;
	fclose(in);
	FILE *out;
	out = fopen("xxx.out","w");
	fprintf(out,"%d",child-1);
	fclose(out);
	exit(0);
}
