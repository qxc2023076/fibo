1. #include <stdlib.h>
2. #include <stdio.h>
3. #include “fibo.h”
4. 
5. int main (int argc, char * argv [])
6. {
7. long ret;
8. int n;
9. if (argc<2){
10. Fprintf (stderr, “missing index.\n”);
11. return -1;
12. }
13. n=atoi (argv [1]);
14. ret = fibo (n);
15. Printf (“Fibo (%d) is %ld\n”,n,ret);
16. return EXIT_SUCCESS;
17. }
