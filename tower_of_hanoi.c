// #include<stdio.h>
// void toh(int disk,char source,char dest,char aux){
//     if(disk==1){
//         printf("\nMove disk from %c to %c",source,dest);
//     }
//     else{
//         toh(disk-1,source,aux,dest);
//         printf("\nMove disk from %c to %c",source,dest);
//         toh(disk-1,aux,dest,source);
//     }
// }
// void main(){
//     int disk;
//     char source,dest,aux;
//     scanf("%d\n%c\n%c\n%c",&disk,&source,&dest,&aux);
//     toh(disk,source,dest,aux);
// }
#include <stdio.h>

// C recursive function to solve tower of hanoi puzzle
void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod)
{
	if (n == 1)
	{
		printf("\n Move disk 1 from rod %c to rod %c", from_rod, to_rod);
		return;
	}
	towerOfHanoi(n-1, from_rod, aux_rod, to_rod);
	printf("\n Move disk %d from rod %c to rod %c", n, from_rod, to_rod);
	towerOfHanoi(n-1, aux_rod, to_rod, from_rod);
}

int main()
{
    int disk;
    char source,dest,aux;
    scanf("%d\n%c\n%c\n%c",&disk,&source,&dest,&aux);
    towerOfHanoi(disk,source,dest,aux);
	return 0;
}
