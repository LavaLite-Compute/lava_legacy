###########################################################################
# $Id: Makefile,v 1.5 2007/08/15 22:18:43 tmizan Exp $
#
# Makefile for Lsbatch - BHIST Command
#
###########################################################################
TOP = ../..
include $(TOP)/Make.misc

.SUFFIXES: .$(OEXT)

INTLIB=$(TOP)/lsf/intlib/lsfint.$(LEXT)
LSFLIB=$(TOP)/lsf/lib/liblsf.$(LEXT)
LSBLIB=$(TOP)/lsbatch/lib/libbat.$(LEXT)

LIBS = $(LSBLIB) $(LSFLIB) $(INTLIB) $(BSDLIB) 

CFLAGS = ${EXTERN_CFLAGS} -I$(TOP)

OBJS_BHIST = bhist.$(OEXT) read.event.$(OEXT) ../cmd/cmd.job.$(OEXT) \
     ../cmd/cmd.misc.$(OEXT) ../cmd/cmd.jobid.$(OEXT) ../cmd/cmd.prt.${OEXT} \
     ../cmd/cmd.err.$(OEXT) ../cmd/cmd.hist.$(OEXT)

TGT = bhist$(EEXT)


build all:	${TGT}

.c.$(OEXT):     $<
	${CC} ${CFLAGS} $(OUTF) -c $<

bhist$(EEXT): ${OBJS_BHIST} $(LIBS)
	$(CC) ${CFLAGS} ${OBJS_BHIST} ${LIBS} $(OUTF)

$(INTLIB):
	cd ${@D}; $(MAKE)

$(LSFLIB):
	cd ${@D}; $(MAKE)

$(LSBLIB):
	cd ${@D}; $(MAKE)

brelease:	build
	$(INST) ${TGT} $(BRELEASE)/$(LM_ARCH)/bin/

clean: 
	rm -f $(COMCLEAN) ${TGT} 


# These dependencies must be maintained by hand (for now)
bhist.$(OEXT) read.event.$(OEXT):	bhist.h ../lsbatch.h ../../lsf/lsf.h 
