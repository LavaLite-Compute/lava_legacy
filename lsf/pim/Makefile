# $Header: /cvs/CVS/lava_test/lsf/pim/Makefile,v 1.7 2007/08/15 22:18:55 tmizan Exp $
############################################################################
#
# Makefile for PIM
#
###########################################################################

TOP = ../..
include $(TOP)/Make.misc

INTLIB=$(TOP)/lsf/intlib/lsfint.$(LEXT)
LSFLIB=$(TOP)/lsf/lib/liblsf.$(LEXT)

CFLAGS = ${EXTERN_CFLAGS} ${SITE}

LIBS =  $(INTLIB) $(LSFLIB) ${BSDLIB} $(LDLLIB) $(MATHLIB)

OBJS =  pim.main.o pim.os.o

PIM_TGT = pim$(EEXT)


all build: $(PIM_TGT)

pim$(EEXT): ${OBJS} ${LIBS}
	$(CC) ${CFLAGS} ${OBJS} ${LIBS} $(OUTF)

$(INTLIB):
	cd ${@D}; ${MAKE}

$(LSFLIB):
	cd ${@D}; ${MAKE}

brelease: build
	$(INST) $(PIM_TGT) $(BRELEASE)/$(LM_ARCH)/etc/

clean: 
	rm -f $(COMCLEAN) $(PIM_TGT)


# These dependencies are maintained by hand
PIM = ../../config.h ../lib/lib.pim.h ../lib/lproto.h
PLATFORMS = pim.linux.h
pim.main.o:	$(PIM)
pim.os.o:	$(PIM) $(PLATFORMS)
