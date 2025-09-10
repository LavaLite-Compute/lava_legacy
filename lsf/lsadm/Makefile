# $Id: Makefile,v 1.7 2007/08/15 22:18:54 tmizan Exp $
############################################################################
#
# Makefile for measurement and management programs
#
############################################################################

TOP = ../..
include $(TOP)/Make.misc

.SUFFIXES: .$(OEXT)

INTLIB=$(TOP)/lsf/intlib/lsfint.$(LEXT)
LSFLIB=$(TOP)/lsf/lib/liblsf.$(LEXT)

LIBS =  $(INTLIB) $(LSFLIB) ${BSDLIB}

CFLAGS = -I$(TOP) -I$(TOP)/lsf ${EXTERN_CFLAGS}

OBJS_LSADMIN = lsadmin.$(OEXT) cmd.limcontrol.$(OEXT) cmd.rescontrol.$(OEXT) \
               startup.$(OEXT)

LSADM_TGT = lsadmin$(EEXT)


all build:	${LSADM_TGT}

.c.$(OEXT):     $<
	${CC} ${CFLAGS} $(OUTF) -c $<

lsadmin$(EEXT):      ${OBJS_LSADMIN} $(LIBS)
	$(CC) ${CFLAGS} ${OBJS_LSADMIN} ${LIBS} $(OUTF)

$(INTLIB):
	cd ${@D}; $(MAKE)

$(LSFLIB):
	cd ${@D}; $(MAKE)

brelease:	build
	$(INST) ${LSADM_TGT} $(BRELEASE)/$(LM_ARCH)/bin/

clean:
	rm -f $(COMCLEAN) ${LSADM_TGT} 


# These dependencies are maintained by hand (for now)
lsadmin.$(OEXT) : lsadmin.h ../lsf.h
cmd.limcontrol.$(OEXT) : ../lsf.h
cmd.rescontrol.$(OEXT) : ../lsf.h ../lib/mls.h
startup.$(OEXT) : ../lsf.h ../lib/mls.h

