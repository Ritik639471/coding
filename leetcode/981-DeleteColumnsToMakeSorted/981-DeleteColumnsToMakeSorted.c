// Last updated: 4/13/2026, 3:34:51 PM
int minDeletionSize(char** strs, int strsSize) {
    int i=0,k=0;
    while(strs[0][i]!='\0'){
        for(int j=1;j<strsSize;j++){
            if((strs[j][i]-strs[j-1][i])<0) {k++;break;}
        }
        i++;
    }
    return k;
}