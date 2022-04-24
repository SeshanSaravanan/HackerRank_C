/* You are given  triangles, specifically, their sides ,  and . Print them in the same style but sorted by their areas from the smallest one to the largest one. It is guaranteed that all the areas are different.

The best way to calculate a area of a triangle with sides ,  and  is Heron's formula:

 where .

Input Format

The first line of each test file contains a single integer .  lines follow with three space-separated integers, ,  and .

Constraints

, and 
Output Format

Print exactly  lines. On each line print  space-separated integers, the ,  and  of the corresponding triangle.

Sample Input 0

3
7 24 25
5 12 13
3 4 5
Sample Output 0

3 4 5
5 12 13
7 24 25
Explanation 0

The square of the first triangle is . The square of the second triangle is . The square of the third triangle is . So the sorted order is the reverse one. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;

void sort_by_area(triangle* tr, int n)
{
    double area[n], s;
    int i;
    for(i = 0; i < n; i++){
        s = (tr[i].a + tr[i].b + tr[i].c ) / 2.0;

        area[i] = sqrt(s * (s - tr[i].a) * (s - tr[i].b) * (s - tr[i].c));
    }

    int j, k;
    double tempArea;
    struct triangle temp;
    for(k = 0; k < n; k++){
        for(j = 0; j < n - k - 1; j++){
            if(area[j] > area[j + 1]){
                temp = tr[j];
                tr[j] = tr[j + 1];
                tr[j + 1] = temp;

                tempArea = area[j];
                area[j] = area[j + 1];
                area[j + 1] = tempArea;
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
