#pragma once
using namespace std;
#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <new>
#define MAX 100
public class matrix {

public:
	double **mymatrix;
	double **pro_matrix;
	double **res_matrix;
	double **B;

	struct size
	{
		int rows,colms;
	} m_size;

	matrix(int r, int c, int k = 0)
	{
		
		m_size.rows = r;
		m_size.rows = c;

		mymatrix = new double*[r];
		if (r)
		{
			mymatrix[0] = new double[r * c];
			for (int i = 1; i < r; ++i)
				mymatrix[i] = mymatrix[0] + i * c;
		}
		clr(r, c, mymatrix);
		B = new double*[r];
		if (r)
		{
			B[0] = new double[r * c];
			for (int i = 1; i < r; ++i)
				B[i] = B[0] + i * c;
		}
		clr(r, c, B);

		if (k == 0)
		{
			pro_matrix = new double*[r];
			if (r)
			{
				pro_matrix[0] = new double[r * c];
				for (int i = 1; i < r; ++i)
					pro_matrix[i] = pro_matrix[0] + i * c;
			}
			clr(r, c, pro_matrix);
			res_matrix = new double*[r];
			if (r)
			{
				res_matrix[0] = new double[r * c];
				for (int i = 1; i < r; ++i)
					res_matrix[i] = res_matrix[0] + i * c;
			}
			clr(r, c, res_matrix);
		}
		else
		{
			pro_matrix = new double*[c];
			if (c)
			{
				pro_matrix[0] = new double[c * k];
				for (int i = 1; i < c; ++i)
					pro_matrix[i] = pro_matrix[0] + i * k;
			}
			clr(c, k, pro_matrix);
			res_matrix = new double*[r];
			if (r)
			{
				res_matrix[0] = new double[r * k];
				for (int i = 1; i < r; ++i)
					res_matrix[i] = res_matrix[0] + i * k;
			}
			clr(r, k, res_matrix);
		}
	}

	~matrix()
	{
		if (m_size.rows) delete[] mymatrix[0];
		delete[] mymatrix;
		if (m_size.rows) delete[] pro_matrix[0];
		delete[] pro_matrix;
		if (m_size.rows) delete[] res_matrix[0];
		delete[] res_matrix;
		if (m_size.rows) delete[] B[0];
		delete[] B;
	}
	void mat_def(double **ptr,int r,int c)
	{
		ptr = new double*[r];
		if (r)
		{
			ptr[0] = new double[r * c];
			for (int i = 1; i < r; ++i)
				ptr[i] = ptr[0] + i * c;
		}
		clr(r, c, ptr);
	}

	void add_m(int r, int c)
	{
		for (int i = 0; i < r; i++)
			for (int j = 0; j < c; j++)
				res_matrix[i][j] = mymatrix[i][j]+ pro_matrix[i][j];
	}
	void sub_m(int r, int c)
	{
		for (int i = 0; i < r; i++)
			for (int j = 0; j < c; j++)
				res_matrix[i][j] = mymatrix[i][j] - pro_matrix[i][j];
	}
	void sub_my(int r, int c)
	{
		for (int i = 0; i < r; i++)
			for (int j = 0; j < c; j++)
				res_matrix[i][j] = pro_matrix[i][j] - mymatrix[i][j];
	}
	void mul_m(int r, int c, int n)
	{
		for (int i = 0; i < r; i++)
			for (int j = 0; j < c; j++)
				for (int k = 0; k < n; k++)
					res_matrix[i][j] += mymatrix[i][k] * pro_matrix[k][j];

	}
	void mul_bn_m(int r, int c, double num)
	{
		for (int i = 0; i < r; i++)
			for (int j = 0; j < c; j++)
				pro_matrix[i][j] = mymatrix[i][j]*num;
	}
	void mul_bn_my(int r, int c, double num)
	{
		for (int i = 0; i < r; i++)
			for (int j = 0; j < c; j++)
				pro_matrix[i][j] = pro_matrix[i][j] * num;
	}
	void transpose(int s)
	{
		for (int i = 0; i < s; i++)
			for (int j = 0; j < s; j++)
				pro_matrix[i][j] = mymatrix[j][i];
	}
	double ** f_transpose(int r, int c, double **mat)
	{
		double** A;
		A = new double*[c];
		if (c)
		{
			A[0] = new double[r * c];
			for (int i = 1; i < c; ++i)
				A[i] = A[0] + i * r;
		}
		clr(c, r, A);
		for (int i = 0; i < r; i++)
			for (int j = 0; j < c; j++)
				A[j][i] = mat[i][j];
		return A;

	}
	void identity_matrix(int s, double **mat)
	{
		for (int i = 0; i < s; i++)
			for (int j = 0; j < s; j++)
				if (i == j)
					mat[i][j] = 1;
				else
					mat[i][j] = 0;

	}
	/*void reform_mat(double **mat,int x, int y, int k)
	{
		int b = 1;
		double temp;
		while (b>0)
		{
			b = 0;
			for (int i = k; i < x - 1; i++)
			{
				if (fabs(mat[i][k]) < fabs(mat[i + 1][k]))
				{
					b = 1;
					for (int j = 0; j < y; j++)
					{
						temp = mat[i + 1][j];
						mat[i + 1][j] = mat[i][j];
						mat[i][j] = temp;
					}
				}
			}
		}
	}*/
	void reform_mat(double** A, int x, int y ,int lr, int lc)
	{
		int i, j, b = 1;
		double temp;
		check_zeros(A, x, y);
		while (b>0)
		{
			b = 0;
			for (i = lr; i<x - 1; i++)
			{
				if (fabs(A[i][lc])<fabs(A[i + 1][lc]))
				{
					b = 1;
					swap(A, i, i + 1, y);
				}
			}
		}
	}
	int check_zeros(double** A, int r, int c)
	{
		int res = 2;
		int zero_r[MAX];
		int non_place[MAX];
		for (int i = 0; i<MAX; i++)
		{
			zero_r[i] = 1;
			non_place[i] = 100;
		}
		int t, s_i = 0, j = 0;
		for (int i = 0; i<r; i++)
		{
			t = 0;
			for (int j = 0; j<c; j++)
			{
				if (A[i][j] == 0)
					t++;
			}
			if (t == c)
			{
				zero_r[i] = 0;
				s_i++;
				res = 1;
			}
			if (t == c - 1 && A[i][c - 1] != 0)
				res = 0;
		}
		for (int i = 0; i<r; i++)
		{
			if (zero_r[i] == 1)
			{
				non_place[j] = i;
				j++;
			}
		}
		for (int i = 0; i<r - s_i; i++)
		{
			swap(A, non_place[i], i, c);
		}
		return res;
	}
	void redu_mat(int x, int y, double **A)
	{
		int i, j, k, lead = 0, in = 0, l_used = 0;
		int index[MAX][2];
		double temp;
		//reduced form

		for (k = 0; k<x; k++)
		{
			l_used = 0;
			while (!A[k][lead])
			{
				if (lead<y - 1)
				{
					lead++; l_used = 1;
				}
				else if (lead<y && A[k][lead] == 0) break;
			}
			if (l_used == 1 || lead == 0)
			{
				index[k][0] = k;
				index[k][1] = lead;
				in++;
			}
			// turning elements into 1
			for (i = k; i<x; i++)
			{
				temp = A[i][lead];
				if (temp != 0) //Controlling NAN
				{
					for (j = k; j<y; j++)
						A[i][j] = A[i][j] / temp;
				}
				else break;
			}
			// turning elements into 0

			for (i = k + 1; i<x; i++)
			{
				if (A[i][lead] != 0)
					for (j = k; j<y; j++)
						A[i][j] = -A[i][j] + A[k][j];
			}
		}
		//extra reduced form
		for (k = in - 1; k >= 0; k--)
		{
			for (i = 0; i<index[k][0]; i++)
			{
				temp = -A[i][index[k][1]];
				for (j = 0; j<y; j++)
				{
					//if(A[k][k]==0) break; else
					A[i][j] += A[index[k][0]][j] * temp;
				}
			}
		}
	}

	void reform_mat(double **mat, double **i_mat, int x, int y, int k)
	{
		int b = 1;
		double temp;
		while (b>0)
		{
			b = 0;
			for (int i = k; i < x - 1; i++)
			{
				if (fabs(mat[i][k]) < fabs(mat[i + 1][k]))
				{
					b = 1;
					for (int j = 0; j < y; j++)
					{
						temp = mat[i + 1][j];
						mat[i + 1][j] = mat[i][j];
						mat[i][j] = temp;
						
						temp = i_mat[i + 1][j];
						i_mat[i + 1][j] = i_mat[i][j];
						i_mat[i][j] = temp;

					}
				}
			}
		}	
	}

	/*void redu_mat(int x,int y,double **mat)
	{
		int i, j, k;
		double temp;
		//reduced form
		for (k = 0; k<x; k++)
		{
			// turning elements into 1
			for (i = k; i<x; i++)
			{
				temp = mat[i][k];
				if (temp != 0) //Controlling NAN
				{
					for (j = k; j < y; j++)
					{
						mat[i][j] = mat[i][j] / temp;
						//pro_matrix[i][j] = pro_matrix[i][j] / temp;
					}
				}
				else break;
			}
			// turning elements into 0
			for (i = k + 1; i<x; i++)
			{
				if (mat[i][k] != 0)
					for (j = k; j<y; j++)
						mat[i][j] = -mat[i][j] + mat[k][j];
			}
			reform_mat(mat,x,y, k+1);
		}
		//extra reduced form
		for (k = x - 1; k >= 0; k--)
		{
			for (i = 0; i<k; i++)
			{
				temp = -mat[i][k];
				for (j = 0; j<y; j++)
					mat[i][j] += mat[k][j] * temp;
			}
		}
	}*/

	void redu_mat(int x, int y, double **mat,double **i_mat)
	{
		int i, j, k;
		double temp;
		//reduced form
		for (k = 0; k<x; k++)
		{
			// turning elements into 1
			for (i = k; i<x; i++)
			{
				temp = mat[i][k];
				if (temp != 0) //Controlling NAN
				{
					for (j = k; j < y; j++)
						mat[i][j] = mat[i][j] / temp;
					for (j = 0; j < y; j++) //for all i_mat elements matrix
						i_mat[i][j] = i_mat[i][j] / temp;
				}
				else break;
			}
			// turning elements into 0
			for (i = k + 1; i<x; i++)
			{
				if (mat[i][k] != 0)
				{
					for (j = k; j < y; j++)
						mat[i][j] = -mat[i][j] + mat[k][j];
					for (j = 0; j < y; j++) //for all i_mat elements matrix
						i_mat[i][j] = -i_mat[i][j] + i_mat[k][j];
				}
			}
			reform_mat(mat, i_mat, x, y, k + 1);
		}
		//extra reduced form
		for (k = x - 1; k >= 0; k--)
		{
			for (i = 0; i<k; i++)
			{
				temp = -mat[i][k];
				for (j = 0; j < y; j++)
				{
					mat[i][j] += mat[k][j] * temp;
					i_mat[i][j] += i_mat[k][j] * temp;
				}

			}
		}

	}
	void clr(int r, int c, double **t_matrix)
	{
		for (int i = 0; i < r; i++)
			for (int j = 0; j < c; j++)
				t_matrix[i][j] = 0;
	}
	void del()
	{
		
	}
	void rand_m (int r, int c)
	{
		srand(time(NULL));
		// filling the Matrix
		for (int i = 0; i<r; i++)
			for (int j = 0; j<c; j++)
				mymatrix[i][j] = ((int)rand()) % 10 +1;
	}
	void mat_assign(int r,int c,double **A, double **B)
	{
		for (int i = 0; i<r; i++)
			for (int j = 0; j<c; j++)
				A[i][j] = B[i][j];
	}
	double* eigenvalue(double** mat, int r)
	{
		double* values;
		values = new double[r];
		if (r == 1)
		{
			values[0] = -1*-mat[0][0];
			return values;
		}
		else if (r == 2)
		{
			double delta,a,b,c;
			a = 1;
			b = -(mat[0][0] + mat[1][1]);
			c = (mat[1][1] * mat[0][0]) - (mat[0][1] * mat[1][0]);
			delta = b * b - (4 * a*c);
			delta = sqrtf(delta);
			values[0] = (-1 * b + delta) / (2 * a);
			values[1] = (-1 * b - delta) / (2 * a);
			return values;
		}
		else 
		{
			double a, b, c, d;
			int t = 0;
			a = 1;
			b = -(mat[0][0] + mat[1][1]+ mat[2][2]);
			c = (mat[1][1] * mat[2][2]) - (mat[1][2] * mat[2][1]) + (mat[0][0] * mat[2][2]) + (mat[0][0] * mat[1][1]) - (mat[0][1] * mat[1][0]) - (mat[0][2] * mat[2][0]);
			d = -det_Matrix(mat, r);
			for (int i = -10000; i <= 10000; i++)
				if (a*(i*i*i) + b* (i*i) + c * i + d == 0)
				{
					values[t] = i;
					t++;
				}
			return values;
		}
	}
	void getCofactor(double **mat, double **temp, int p, int q, int r)
	{
		int i = 0, j = 0;

		// Looping for each element of the matrix
		for (int row = 0; row < r; row++)
		{
			for (int col = 0; col < r; col++)
			{
				//  Copying into temporary matrix only those element
				//  which are not in given row and column
				if (row != p && col != q)
				{
					temp[i][j++] = mat[row][col];
					// Row is filled, so increase row index and
					// reset col index
					if (j == r - 1)
					{
						j = 0;
						i++;
					}
				}
			}
		}
	}
	double det_Matrix(double **mat, int r)
	{
		double D = 0; // start value

				   //  matrix contains single element
		if (r == 1)
			return mat[0][0];

		double **temp; // To store cofactors
		temp = new double*[r];
		if (r)
		{
			temp[0] = new double[r * r];
			for (int i = 1; i < r; ++i)
				temp[i] = temp[0] + i * r;
		}
		clr(r, r, temp);


		int sign = 1;  // To store sign multiplier

					   // Iterate for each element of first row
		for (int f = 0; f < r; f++)
		{
			// Getting Cofactor of mat[0][f]
			getCofactor(mat, temp, 0, f, r);
			D += sign * mat[0][f] * det_Matrix(temp, r - 1);

			// terms are to be added with alternate sign
			sign = -sign;
		}
		if (m_size.rows) delete[] temp[0];
		delete[] temp;
		return D;
	}
	void swap(double **mat, int row1, int row2,int col)
	{
		for (int i = 0; i < col; i++)
		{
			int temp = mat[row1][i];
			mat[row1][i] = mat[row2][i];
			mat[row2][i] = temp;
		}
	}

	int rank(double **A, int r, int c)
	{
		int t,z_r=0;
		for (int i = 0; i<r; i++)
		{
			t = 0;
			for (int j = 0; j<c; j++)
			{
				if (A[i][j] == 0)
					t++;
			}
			if (t == c)
				z_r++;
		}
		return r - z_r;
	}
	double* find_vectors(double **mat, int r, int c)
	{
		double* roots;
		roots = new double[c];
		for (int i = 0; i < r; i++) 
			for (int j = 0; j < c; j++)
			{
				break;
			}

		return roots;
	}
};