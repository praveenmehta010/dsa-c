#include"StringCompare.cpp"
int wordOccurence(char* word,int word_size,char* text,int text_size){
    int no_of_occurences = 0;
    for(int i=0;i<text_size;i++){
        if(word[0]==text[i]){
            if(stringCompare(word,word_size,&text[i],text_size-i)){
                no_of_occurences++;
            }
        }
    }
    return no_of_occurences;
}