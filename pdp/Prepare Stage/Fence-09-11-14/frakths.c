#include <stdio.h>

void main()
{
	FILE *in,*out;
	int nums[4],c,min;
	in=fopen("fence.in","r");
	out=fopen("fence.out","w");
	for (c=0;c<=3;c++)fscanf(in,"%d",(nums+c));
	min=nums[0];
	for (c=1;c<=3;c++) if (min > nums[c]) min=nums[c];
	min-=1;
	for (c=0;c<=3;c++) nums[c] = nums[c] - min;
	fprintf(out,"%d %d %d %d",nums[0],nums[1],nums[2],nums[3]);
	fclose(in);
	fclose(out);
	exit(0);
}
