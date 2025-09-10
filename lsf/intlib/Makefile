# $Id: Makefile,v 1.13 2007/08/15 22:18:49 tmizan Exp $
############################################################################
#
# Makefile for LIB
#
############################################################################

TOP = ../..
include ${TOP}/Make.misc

.SUFFIXES: .$(OEXT) 

CFLAGS = ${EXTERN_CFLAGS}
LDFLAGS = ${EXTERN_LDFLAGS}

OBJS = daemon.${OEXT}  window.${OEXT} userok.${OEXT} \
       timers.${OEXT} wait.${OEXT} resreq.${OEXT} misc.${OEXT} \
       cmdtime.${OEXT} \
       admin.${OEXT} list.${OEXT} \
       lsftcl.$(OEXT) resourcecmd.$(OEXT) callex.$(OEXT) \
       listset.$(OEXT) bitset.$(OEXT) \
       jidx.$(OEXT) vector.$(OEXT) 

LIB = lsfint.$(LEXT)


all build:	$(LIB)

$(LIB):	${OBJS}
	${LD} ${LDFLAGS} ${OBJS}
	$(RANLIB) $@

.c.$(OEXT) : $<
	${CC} ${CFLAGS} $(OUTF) -c $< 

callex.o: callex.c
	$(CC)  ${CFLAGS}  -DYYCHAR_ARRAY -c callex.c

brelease:	build

clean: 
	rm -f $(COMCLEAN) $(LIB)


# These dependencies are maintained by hand
LIB_H = ../lib/lib.h ../lsf.h ../lim/limout.h
$(OBJS):	$(LIB_H)
daemon.$(OEXT):	intlib.h ../../config.h
window.$(OEXT):	intlib.h ../../config.h
timers.$(OEXT):	intlib.h ../../config.h intlibout.h
wait.$(OEXT):		intlib.h ../../config.h intlibout.h
resreq.$(OEXT):	$(LIB_H) intlib.h resreq.h ../../config.h
cmdtime.$(OEXT):	intlib.h ../../config.h ../lib/lproto.h
admin.$(OEXT):	intlib.h ../../config.h
list.$(OEXT):	        intlib.h ../../config.h intlibout.h
lsftcl.$(OEXT):	        intlib.h ${TCL_INCLUDE}/tcl.h ../../config.h intlibout.h lsftcl.h
resourcecmd.$(OEXT):	intlib.h ../../config.h intlibout.h 
listset.$(OEXT):    intlib.h ../../config.h intlibout.h
bitset.$(OEXT) :    intlib.h ../../config.h intlibout.h bitset.h
testbitset.$(OEXT) : bitset.h bitset.c ../lsf.h intlib.h 
userok.$(OEXT) :    ../lib/mls.h
