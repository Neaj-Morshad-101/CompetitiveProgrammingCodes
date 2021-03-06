#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
	//double area;
};

typedef struct triangle triangle;

void sort_by_area(triangle* tr, int n) {
    double s;
    int temp;
    double tmp;
    double area[n];
    for(int i=0;i<n;i++)
    {
        s= (double)(tr[i].a+tr[i].b+tr[i].c)/2.0;
        area[i]= sqrt(s*(s-tr[i].a)*(s-tr[i].b)*(s-tr[i].c));
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(area[j]>area[j+1])
            {
                tmp=area[j];
                area[j]=area[j+1];
                area[j+1]=tmp;
                temp = tr[j].a;
                tr[j].a=tr[j+1].a;
                tr[j+1].a= temp;

                 temp = tr[j].b;
                tr[j].b=tr[j+1].b;
                tr[j+1].b= temp;

                 temp = tr[j].c;
                tr[j].c=tr[j+1].c;
                tr[j+1].c= temp;

//                swap(tr[j].a,tr[j+1].a);
//                swap(tr[j].b,tr[j+1].b);
//                swap(tr[j].c,tr[j+1].c);
            }
        }
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
