Typical settings for site.exp

  1. test gcc:
  
  GCC_UNDER_TEST "gcc -DNO_LABEL_VALUES=1 -DSKIP_COMPLEX_INT=1 -DSKIP_ATTRIBUTE=1 -fno-builtin -save-temps" 
  
  2. test mlitecc with gcc as backend
      
  the gcc backend is used to test each small translation, the possible translation are:
  --ast-aa-gram output C99 gram C code
  --ast-ba-stmt output ba-stmt C code
  --ast-ca-expr output ca-expr C code
  --ast-da-type output da-type C code
  --ast-ea-expr output ea-expr C code
  --ast-eb-expr output eb-expr C code
  --ast-ec-expr output ec-expr C code
  --ast-fa-stmt output fa-stmt C code
  --ast-ga-code output ga-code C code
  --ast-ha-graf output ha-graf C code
  --ast-ia-init output ia-init C code

  replace --ast-xx-xxx in the following command with any of the above options. 
    	
  GCC_UNDER_TEST "mlitecc ---silence --disable-line-number ---gcc --vararg --ast-xx-xxxx ---host-c-argv -DNO_LABEL_VALUES=1 -DSKIP_COMPLEX_INT=1 -DSKIP_ATTRIBUTE=1"


  3. test mlitecc with qc-- as backend:
  GCC_UNDER_TEST "mlitecc ---silence --disable-line-number --vararg ---host-c-argv -DNO_LABEL_VALUES=1 -DSKIP_COMPLEX_INT=1 -DSKIP_ATTRIBUTE=1"


  4. after you have choosed your setting for site.exp, run 'make check'

  5. compare gcc.sum with gcc.sum.expected. In this release, mlitecc-0.1 with qc-- passes 2143 test cases, 
     fails 511 test cases, and has 321 test cases unresolved.
