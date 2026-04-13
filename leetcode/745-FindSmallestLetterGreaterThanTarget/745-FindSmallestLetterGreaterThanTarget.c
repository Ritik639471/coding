// Last updated: 4/13/2026, 3:35:52 PM
char nextGreatestLetter(char* letters, int lettersSize, char target) {
    int mid,l=0,r=lettersSize-1;
    while(l<=r){
        mid=(r-l)/2+l;
        if(letters[mid]==target) break;
        else if(letters[mid]>target) r=mid-1;
        else if(letters[mid]==target) l=mid+1;
        else break;
    }
    if(letters[mid]<=target) {
        while(letters[mid]<=target && mid<lettersSize-1) mid++;
        if(letters[mid]>target)return letters[mid];
        else return letters[0];}
    if (mid>=lettersSize-1) return letters[0];
    if(letters[mid]<target) return letters[mid+1];
    return letters[mid];
}