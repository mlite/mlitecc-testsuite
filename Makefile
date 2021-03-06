RUNTEST=runtest
FUNTESTFLAGS=
#FLAGS_TO_PASS= GCC_UNDER_TEST="mlitecc "

check: 
	$(RUNTEST) $(RUNTESTFLAGS) $(FLAGS_TO_PASS)\
	--tool gcc 
clean: 
	rm -rf *.i 
	rm -rf *.s 
	rm -rf *.o
	rm -rf *.mxx.*
	rm -rf *.cabs
	rm -rf *.cproto
	rm -rf *.cil.c
	rm -rf *.da
	rm -rf *.bbg
	rm -rf *.S
	rm -rf *.rtl
	rm -rf *.sibling
	rm -rf *.jump
	rm -rf *.null
	rm -rf *.addressof
	rm -rf *.gcse
	rm -rf *.gcse.vcg
	rm -rf *.loop
	rm -rf *.loop.vcg
	rm -rf *.cfg
	rm -rf *.cfg.vcg
	rm -rf *.bp
	rm -rf *.bp.vcg
	rm -rf *.ce1
	rm -rf *.ce1.vcg
	rm -rf *.cse2
	rm -rf *.cse2.vcg
	rm -rf *.life
	rm -rf *.life.vcg
	rm -rf *.vrp
	rm -rf *.vrp.vcg
	rm -rf *.combine
	rm -rf *.comebine.vcg
	rm -rf *.ce2
	rm -rf *.ce2.vcg
	rm -rf *.regmove
	rm -rf *.regmove.vcg
	rm -rf *.lreg
	rm -rf *.lreg.vcg
	rm -rf *.greg
	rm -rf *.greg.vcg
	rm -rf *.postreload
	rm -rf *.postreload.vcg
	rm -rf *.flow2
	rm -rf *.flow2.vcg
	rm -rf *.peephole2
	rm -rf *.peephole2.vcg
	rm -rf *.rnreg
	rm -rf *.rnreg.vcg
	rm -rf *.ce3
	rm -rf *.ce3.vcg
	rm -rf *.sched2
	rm -rf *.sched2.vcg
	rm -rf *.stack
	rm -rf *.stack.vcg
	rm -rf *.bbro
	rm -rf *.bbro.vcg
	rm -rf *.mach
	rm -rf *.mach.vcg
	rm -rf *.gcov
	rm -rf *.te_tbl
