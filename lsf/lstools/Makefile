# $Id: Makefile,v 1.12 2007/08/15 22:18:55 tmizan Exp $
############################################################################
#
# Makefile for Utility programs
#
############################################################################

TOP = ../..
include $(TOP)/Make.misc

.SUFFIXES: .$(OEXT)

INTLIB=$(TOP)/lsf/intlib/lsfint.$(LEXT)
LSFLIB=$(TOP)/lsf/lib/liblsf.$(LEXT)

CFLAGS = ${EXTERN_CFLAGS}

LIBS = $(INTLIB) $(LSFLIB) $(BSDLIB)

OBJS = lsplace.$(OEXT) lseligible.$(OEXT) lsload.$(OEXT) \
       lsloadadj.$(OEXT) lsid.$(OEXT) lshosts.$(OEXT) \
       lsinfo.$(OEXT) \
       lsmon.$(OEXT) lsacct.$(OEXT) \
       lsrcp.$(OEXT)

CMDS = lsplace$(EEXT) lseligible$(EEXT) lsload$(EEXT) \
       lsloadadj$(EEXT) lsid$(EEXT) lshosts$(EEXT) \
       lsinfo$(EEXT) lsmon$(EEXT) \
       lsacct$(EEXT) lsrcp$(EEXT)


all build: ${CMDS}

.c.$(OEXT) : $<
	$(CC) $(CFLAGS) $(OUTF) -c $<

lsplace$(EEXT): lsplace.$(OEXT) $(LIBS)
	$(CC) ${CFLAGS} lsplace.$(OEXT) ${LIBS} $(OUTF)

lseligible$(EEXT):	lseligible.$(OEXT) $(LIBS)
	$(CC) ${CFLAGS} lseligible.$(OEXT) ${LIBS} $(OUTF)

lsload$(EEXT):	lsload.$(OEXT) load.$(OEXT) $(LIBS)
	$(CC) ${CFLAGS} lsload.$(OEXT) load.$(OEXT) ${LIBS} $(OUTF)

lsloadadj$(EEXT):	lsloadadj.$(OEXT) $(LIBS)
	$(CC) ${CFLAGS} lsloadadj.$(OEXT) ${LIBS} $(OUTF)

lsid$(EEXT):	lsid.$(OEXT) $(LIBS)
	$(CC) ${CFLAGS} lsid.$(OEXT) ${LIBS} $(OUTF)

lslockhost$(EEXT):	lslockhost.$(OEXT) $(LIBS)
	$(CC) ${CFLAGS} lslockhost.$(OEXT) ${LIBS} $(OUTF)

lsunlockhost$(EEXT):	lsunlockhost.$(OEXT) $(LIBS)
	$(CC) ${CFLAGS} lsunlockhost.$(OEXT) ${LIBS} $(OUTF)

lshosts$(EEXT):	lshosts.$(OEXT) $(LIBS)
	$(CC) ${CFLAGS} lshosts.$(OEXT) ${LIBS} $(OUTF)

lsinfo$(EEXT):	lsinfo.$(OEXT) $(LIBS)
	$(CC) ${CFLAGS} lsinfo.$(OEXT)  ${LIBS} $(OUTF)

lsmon$(EEXT): lsmon.$(OEXT) load.$(OEXT) $(LIBS)
	$(CC) ${CFLAGS} lsmon.$(OEXT) load.$(OEXT) $(LIBS) ${TERMCAPLIB} $(OUTF)

lsacct$(EEXT): lsacct.$(OEXT) $(LIBS)
	$(CC) ${CFLAGS} lsacct.$(OEXT) ${LIBS} $(OUTF)

lsrcp$(EEXT):	lsrcp.$(OEXT) $(LIBS)
	$(CC) ${CFLAGS} lsrcp.$(OEXT) ${LIBS} $(BSDLIB) $(OUTF)

$(INTLIB):
	cd ${@D}; $(MAKE)

$(LSFLIB):
	cd ${@D}; $(MAKE)

brelease:	build
	$(INST) ${CMDS} $(BRELEASE)/$(LM_ARCH)/bin/

clean:
	rm -f $(COMCLEAN) ${CMDS}


# These dependencies are maintained by hand
lseligible.$(OEXT):	../lsf.h ../../config.h
lshosts.$(OEXT):	../lsf.h
lsid.$(OEXT):	../lib/lproto.h ../lib/lib.table.h ../lsf.h
lsinfo.$(OEXT):	../lsf.h
lsload.$(OEXT):	../../config.h ../lib/lproto.h ../lib/lib.table.h ../lsf.h
lsloadadj.$(OEXT):	../../config.h ../lsf.h
lslockhost.$(OEXT):	../lsf.h
lsplace.$(OEXT):	../../config.h ../lsf.h
lsunlockhost.$(OEXT):	../lsf.h
lsmon.$(OEXT):        ../lsf.h ../../config.h
load.$(OEXT):         ../lsf.h ../../config.h
