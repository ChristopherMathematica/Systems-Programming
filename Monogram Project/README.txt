  On a CISC210:
  gcc -o cymonogram cymonogram.c -lncurses -ltinfo
 
  Meanings of the flags:
  -lncurses : link with "libcurses" (the "terminal graphics" library) from the standard library lo    cation
  -L ~/lib : Look for libraries in ~/lib (i.e., in the "lib" directory under my home)
  -I ~/include : Look for extra header files in ~/include (i.e., the "include" directory in my hom    e)
  -lsense : link with the file libsense.a (you created this when you installed the sense library)c    h