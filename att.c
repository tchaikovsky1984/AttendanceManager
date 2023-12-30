#include <stdio.h>
#include <stdlib.h>
int main()
{
	int arr[6], *skip;
	int i,n=1,pre,occ,n_skip,j,f=1;
	double att,req;
	printf("========ATTENDANCE CHECK | BUNK MANAGER========\n");
	printf("Percentage required in numbers : \t");
	scanf("%lf", &req);
	printf("Schedule : \n");
	for(i=0;i<=5;i++)
	{
		printf("\t Day %d ; Hours : \t",i);
		scanf("%d",&arr[i]);
	}
	printf("Present Hours: \t");
	scanf("%d",&pre);
	print("Total Hours: \t");
	scanf("%d",&occ);
	printf("Next working day: \t");
	scanf("%d",&i);
	att = (double)pre/(double)occ;
	printf("Number of absences: \t");
	scanf("%d",&n_skip);
	if(n_skip != 0)
		printf("Skipping the following days:\n");
	skip = (int*)malloc(sizeof(int)*n_skip);
	for(j=0;j<n_skip;j++){
		scanf("%d",&skip[j]);
	}
	for(j=0;j<n_skip;j++)
		printf("Skipping Day %d\n",skip[j]);
	printf("Day     Pre/Tot %\n=====================\n");
	printf("0\t%d/%d\t%lf\n",pre,occ,(att*100));
	j=-1;
	do
	{
		if(n!=skip[j+1] || j>=n_skip)
		{
			pre = pre + arr[i];
			occ = occ + arr[i];
			att = (double)pre/(double)occ;
			printf("%d\t%d/%d\t%lf\n",n,pre,occ,(att*100),skip[j+1]);
			i = (i+1)%6;
			n++;
		}
		else
		{
			occ = occ + arr[i];
			att = (double)pre/(double)occ;
			printf("%d\t%d/%d\t%lf\t(SKIPPED)\n",n,pre,occ,(att*100));
			i = (i+1)%6;
			n++;
			j++;
		}
	}while(att<=(req/100.0));
	free(skip);
	return 0;
}
