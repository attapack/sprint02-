void mx_printchar(char c);

void mx_isos_triangle(unsigned int length, char c){
    for (unsigned int i = 1; i <= length; i++){
        for(int j = 0; j < i; j++){
            mx_printchar(char c);
        }
        mx_printchar('\n');
    }
}