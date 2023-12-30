#include <stdio.h>
#include <stdlib.h>
int main()
{
	int arr[6], *skip;
	int i,n=1,pre,occ,n_skip,j,f=1;
	double att,req;
	printf("========ATTENDANCE CHECK | BUNK MANAGER========\n");
	printf("Enter the percentage required in numbers : \t");
	scanf("%lf", &req);
	printf("Enter hours in week : \n");
	for(i=0;i<=5;i++)
	{
		printf("\t Day %d ; Hours : \t",i);
		scanf("%d",&arr[i]);
	}
	printf("Enter your present hours (after today's hours): \t");
	scanf("%d",&pre);
	printf("Enter total hours (after today's hours): \t");
	scanf("%d",&occ);
	printf("Enter day tomorrow : \t");
	scanf("%d",&i);
	att = (double)pre/(double)occ;
	printf("Enter number of days you are skipping : \t");
	scanf("%d",&n_skip);
	if(n_skip != 0)
		printf("Enter the days you are skipping (Next working day is day 1, so if you want to skip the day after tomorrow enter 2 and so on. And if you are skipping multiple days enter all the day numbers. Enter after each day.Enter in ascneding order.): \n");
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
			printf("Day %d : %d / %d - %lf\n",n,pre,occ,(att*100));
			i = (i+1)%6;
			n++;
			j++;
		}
	}while(att<=(req/100.0));
	free(skip);
	return 0;
}
