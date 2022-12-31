#include<stdio.h>
#include<cstdlib>
int main()
{
	int row1,col1,row2,col2;
	float **array1,**array2;
	float **sum_array;
	int i,j,k;
	printf("input row1,column1,row2,colum2:");
	scanf("%d %d %d %d",&row1,&col1,&row2,&col2);
	if(col1!=row2)
		printf("The multiplication for these two arrays is illegal\n");
	else{
		array1=(float**)malloc(row1*sizeof(float*));
		array2=(float**)malloc(row2*sizeof(float*));
		sum_array=(float**)malloc(row1*sizeof(float*));
		for(i=0;i<row1;i++)
			array1[i]=(float*)malloc(col1*sizeof(float));
		for(i=0;i<row2;i++)
			array2[i]=(float*)malloc(col2*sizeof(float));
		for(i=0;i<row2;i++)
			sum_array[i]=(float*)malloc(col2*sizeof(float));
			
		printf("input array1\n");
		for(i=0;i<row1;i++)
		{
			for(j=0;j<col1;j++){
				printf("input row %d col %d:",i,j);
				scanf("%f",&array1[i][j]);
			}
		}
		printf("+++++++++++++\n");
		printf("input array2\n");
		for(i=0;i<row2;i++)
		{
			for(j=0;j<col2;j++){
				printf("input row %d col %d:",i,j);
				scanf("%f",&array2[i][j]);
			}
		}
		printf("+++++++++++++\n");
		
		for(i=0;i<row1;i++)
			for(j=0;j<col2;j++)
			{
				sum_array[i][j]=0;
				for(k=0;k<col1;k++)
						sum_array[i][j]+=array1[i][k]*array2[k][j];
			}

		printf("The array1 is:\n");
		for(i=0;i<row1;i++)
		{
			for(j=0;j<col1;j++)
				printf("%f  ",array1[i][j]);
			printf("\n");
		}
		printf("The array2 is:\n");
		for(i=0;i<row2;i++)
		{
			for(j=0;j<col2;j++)
				printf("%f  ",array2[i][j]);
			printf("\n");
		}
		printf("The result is:\n");
		for(i=0;i<row1;i++)
		{
			for(j=0;j<col2;j++)
				printf("%f  ",sum_array[i][j]);
			printf("\n");
		}
	}
	return 0;
}
	
//#include<stdio.h>
//#define M 3
//#define N 3
// 
//int main(void)
//{
//	//定义三个数组，第三个存放结果 均初始化为0
//	int array1[M][N] = { 0 };
//	int array2[M][N] = { 0 };
//	int array3[M][N] = { 0 };
//	int m ,i,j;
//	//构建矩阵1
//	printf("第一个矩阵:\n");
//	for ( i = 0; i < M; i++)
//	{
//		for ( j = 0; j < N; j++)
//		{
//			scanf("%d", &array1[i][j]);
//		}
//	}
//	//构建矩阵2
//	printf("第二个矩阵:\n");
//	for (i = 0; i < M; i++)
//	{
// 
//		for (j = 0; j < N; j++)
//		{
//			scanf("%d", &array2[i][j]);
//		}
//	}
//		//实现矩阵相乘 要判断矩阵的行列是否可以相乘 
//	   //矩阵1的行*矩阵2的列 对应相乘相加
//		printf("矩阵相乘结果:\n");
//		for (i = 0; i < M; i++)
//		{
//			for (int j = 0; j < N; j++)
//			{
//				int sum = 0;
//				for (m = 0; m < 3; m++)
//				{
//					sum = sum + array1[i][j] * array2[j][i];
//				}
//				array3[i][j] = sum;
//			}
//		}
//		for (i = 0; i < M; i++)
//		{
//			for (int j = 0; j < N; j++)
//			{
//				printf("%3d", array3[i][j]);
//			}
//			printf("\n");
//		}
// 
//	}

//#include<stdio.h>
//int main()
//{
//	int c1,r1,c2,r2;
//
//
//struct matrice
//{
//	int row;
//	int column;
//};
//
//printf("enter row");
//scanf("%d",&r1,&r2);
//printf("enter column");
//scanf("%d",&c1,&c2);
//struct matrice matr1={
//	row=r1;
//	column=c1;
//};
//
//struct matrice matr2={
//	row=r2;
//	column=c2;
//};
//
//struct matrice matr3={
//	row=r1;
//	column=c2;
//};
//
//    printf("第一个矩阵:\n");
//	for ( i = 0; i < r1; i++)
//	{
//		for ( j = 0; j < c1; j++)
//		{
//			scanf("%d", &array1[r1][c1]);
//		}
//	}
//	//构建矩阵2
//	printf("第二个矩阵:\n");
//	for (i = 0; i < r2; i++)
//	{
// 
//		for (j = 0; j < c2; j++)
//		{
//			scanf("%d", &array2[r2][c2]);
//		}
//	}
//	printf("矩阵相乘结果:\n");
//		for (i = 0; i < r1; i++)
//		{
//			for (int j = 0; j < c2; j++)
//			{
//				int sum = 0;
//				
//				
//					sum = sum + array1[i][j] * array2[j][i];
//				
//				array3[i][j] = sum;
//			}
//		}
//		for (i = 0; i < r1; i++)
//		{
//			for (int j = 0; j < c2; j++)
//			{
//				printf("%3d", array3[i][j]);
//			}
//			printf("\n");
//		}
// 
//	}


