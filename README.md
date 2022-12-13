# matrix-vector-mult-benchmark








ADDED CODES TO main.c:
        
        
    
        int m = (int *) malloc(N*N*N*N*N*N*N*sizeof(int));
        for(int m=0; m<M; m++){
            m += M[m];
            }
        
        int vv = (int *) malloc(N*N*N*N*N*N*N*sizeof(int));
        for(int vv=0; vv<v; vv++){
            vv += v[vv];
            }
            
         int bb = (int *) malloc(N*sizeof(int));
        for(int bb=0; bb<b; bb++){
            bb += b[bb];
            }
            
        FILE* in;
        FILE* out;
        char buffer_in[256], buffer_out[256];
        out = fopen("pointer.txt","w");

        sprintf(buffer_out,"%d %d %d", m,vv,bb);
        fwrite(buffer_out, sizeof(char), strlen(buffer_out),out);

   
    
    

    
    
    
  first the variables m, vv and bb is created and they all supposedly contain the contents inside M (matrix), v (vector) and b (the product of the multiplication of the matrix and vector).
  After that, all the codes below's function is to create a whole new text document called pointer.txt, wherein the contents of m, vv, bb will be contained. After that, it will be read by
  another python file and in python, the numpy module will help multiply the matrix and vectors which has already been read from the text document and stored, and if the multiplication result
  is not equal to bb, it will return a message saying that it is false. Otherwise, it returns true.
  
  That is the idea tho, but sadly it returning segmentation error and im still working on a fix, when i do find a fix, this will be updated to something more satisfactory.
  [ i have already made free() on all possible variables at the ending, does not help :( ]
