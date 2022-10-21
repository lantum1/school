#include<stdio.h>
#include"vdbl.h"
#include"vint.h"
typedef struct{
    vector_int cip;
    vector_int pi;
    vector_dbl ye;
    int m;
    int n;
} matrix;
int read_matrix(matrix *matr, char* name){
	FILE *inp = fopen(name, "r");
	if (inp==NULL){
		printf("Error reading file 1");
		fclose(inp);
		return -3;
	}
	int el, el_indx = 0;
	fscanf(inp, "%d %d\n", &matr->n, &matr->m);
	vint_init(&matr->cip,0);
	vint_init(&matr->pi,0);
	vdbl_init(&matr->ye,0);
	for (int i = 0; i < matr->n; i++){
		bool f = false;
		for (int j = 0; j < matr->m; j++){
			fscanf(inp, "%d", &el);
			if (el != 0){
				if (!f){
					vint_push(&matr->cip, el_indx);
					f = true;
				}
				vint_push(&matr->pi, j);
				vdbl_push(&matr->ye, el);
				el_indx++;
			}
		}
		if (!f){
			vint_push(&matr->cip, el_indx);
		}
	}
	vint_push(&matr->cip, el_indx);
	fclose(inp);
	return 0;
}
int read_vector(vector_dbl* vec, char* name){
	FILE *inp = fopen(name, "r");
	if (inp==NULL){
		printf("Error reading file 2");
		fclose(inp);
		return -2;
	}
	double i; 
	while (fscanf(inp,"%lf",&i)==1){
		vdbl_push(vec,i);
	}
	fclose(inp);
	return 0;
}
void view_matrix(matrix *matrix){	
	int n = vint_get_size(&matrix->cip);
	for (int i = 0; i < n; i++){
		printf("%lf ", vint_get(&matrix->cip, i));
	}
	printf("\n");
	n = vint_get_size(&matrix->pi);
	for (int i = 0; i < n; i++){
		printf("%lf ", vint_get(&matrix->pi, i));
	}
	printf("\n");
	n = vdbl_get_size(&matrix->ye);
	for (int i = 0; i < n; i++){
		printf("%lf ", vdbl_get(&matrix->ye, i));
	}
	printf("\n");
}

void print_matrix(matrix *matr){
	for (int i = 0; i < matr->m; i++){
		int k = vint_get(&matr->cip, i);
		int to = vint_get(&matr->cip, i+1);
		for (int j = 0; j<matr->n; j++){
			if (k<to && vint_get(&matr->pi,k)==j){
				printf("%lf ",vdbl_get(&matr->ye,k));
				k++;
			}
			else{
				printf("%lf ",0.0);
			}  
		}
		printf("\n");
	}
}
vector_dbl multiply(matrix *matr, vector_dbl *v){
	vector_dbl res;
	vdbl_init(&res, matr->n);
	for (int i = 0; i < matr->m; i++){
		int k = vint_get(&matr->cip, i);
		int to = vint_get(&matr->cip, i+1);
		for (int j = 0; j<matr->n; j++){
			if (k<to && vint_get(&matr->pi,k)==j){
				vdbl_set(&res,j,vdbl_get(&res,j)+vdbl_get(&matr->ye, k)*(vdbl_get(v,i)));
				k++;
			} 
		}
	}
	return res;
}
int main(int argc, char* argv[]){
	matrix matr;	
	vector_dbl vec,result;
	int count=0;
	vdbl_init(&vec,0);
	vdbl_init(&result,0);
	if (argc>3 || argc<=1){
        fprintf(stderr,"Error in arguments...\n");
        return -1;
    }
	if(read_matrix(&matr, argv[1])==0 && read_vector(&vec, argv[2])==0){
		printf("Human readable matrix:\n");
		print_matrix(&matr);
		printf("CIP, PI, YE:\n");
		view_matrix(&matr);
		result=multiply(&matr,&vec);
		printf("Result\n");
		for (int i = 0; i < vdbl_get_size(&result); i++){
			printf("%lf ", vdbl_get(&result, i));
			if (vdbl_get(&result, i)==0){
				count++;
			}
		}
		printf("Number of ZEROS: %d\n",count);
	}
	return 0;
}
