# $Id: Makefile,v 1.19 2007/08/15 22:18:44 tmizan Exp $
############################################################################
#
# Makefile for Lsbatch daemons
#
###########################################################################
TOP = ../..
include $(TOP)/Make.misc

.SUFFIXES: .$(OEXT) 

INTLIB=$(TOP)/lsf/intlib/lsfint.$(LEXT)
LSFLIB=$(TOP)/lsf/lib/liblsf.$(LEXT)
LSBLIB=$(TOP)/lsbatch/lib/libbat.$(LEXT)

LIBS = $(LSBLIB) $(LSFLIB) $(INTLIB) ${MATHLIB} ${BSDLIB} ${LDLLIB}

CFLAGS = ${EXTERN_CFLAGS} -I$(TOP) 

MOBJ = mbd.main.$(OEXT) mbd.serv.$(OEXT) mbd.job.$(OEXT) mbd.queue.$(OEXT) \
       mbd.log.$(OEXT) misc.$(OEXT) mbd.comm.$(OEXT) daemons.$(OEXT) \
       daemons.xdr.$(OEXT) mbd.init.$(OEXT) mbd.misc.$(OEXT) mbd.grp.$(OEXT) \
       mbd.host.$(OEXT) mbd.policy.$(OEXT) mbd.dep.$(OEXT) \
       mbd.requeue.$(OEXT) mbd.resource.$(OEXT) \
       mbd.jgrp.$(OEXT) mbd.proxy.$(OEXT)\
       mbd.jarray.$(OEXT)  elock.$(OEXT) mail.$(OEXT) \
       mbd.window.$(OEXT)

SOBJ = sbd.main.$(OEXT) sbd.serv.$(OEXT) sbd.job.$(OEXT) sbd.comm.$(OEXT) \
       daemons.$(OEXT) misc.$(OEXT) daemons.xdr.$(OEXT) sbd.misc.$(OEXT) \
       sbd.file.$(OEXT) sbd.sig.$(OEXT) sbd.policy.$(OEXT) sbd.xdr.$(OEXT) \
       elock.$(OEXT) mail.$(OEXT) 

LSB_DAEMON_TGT = mbatchd$(EEXT) sbatchd$(EEXT) 


build all:	${LSB_DAEMON_TGT}

.c.$(OEXT):   $<
	${CC} ${CFLAGS} $(OUTF) -c $<

mbatchd$(EEXT): ${MOBJ} $(LIBS)
	$(CC) $(CFLAGS) ${MOBJ} ${LIBS} $(TCLLIB) $(OUTF)

sbatchd$(EEXT):	${SOBJ} $(LIBS)
	$(CC) $(CFLAGS) ${SOBJ} ${LIBS} $(TCLLIB) $(OUTF)

$(INTLIB):
	cd ${@D}; $(MAKE)

$(LSFLIB):
	cd ${@D}; $(MAKE)

$(LSBLIB):
	cd ${@D}; $(MAKE)

brelease: build
	$(INST) ${LSB_DAEMON_TGT} $(BRELEASE)/$(LM_ARCH)/etc/

clean:
	rm -f $(COMCLEAN) ${LSB_DAEMON_TGT}


# These dependencies are maintained by hand
mbd.h:                  jgrp.h proxy.h
daemons.xdr.$(OEXT):	daemonout.h ../lsbatch.h ../../lsf/lsf.h daemons.h
daemons.$(OEXT):	daemonout.h ../lsbatch.h ../../lsf/lsf.h daemons.h 
mbd.comm.$(OEXT):	mbd.h ../../lsf/lib/lib.table.h daemonout.h daemons.h\
		../lsbatch.h ../../lsf/lsf.h 
mbd.host.$(OEXT):	mbd.h ../../lsf/lib/lib.table.h daemonout.h daemons.h\
		../lsbatch.h ../../lsf/lsf.h
mbd.grp.$(OEXT):	mbd.h ../../lsf/lib/lib.table.h daemonout.h daemons.h\
		../lsbatch.h ../../lsf/lsf.h
mbd.init.$(OEXT):	mbd.h ../../lsf/lib/lib.table.h daemonout.h daemons.h\
		../lsbatch.h ../../lsf/lsf.h
mbd.job.$(OEXT):	mbd.h ../../lsf/lib/lib.table.h daemonout.h daemons.h\
		../lsbatch.h ../../lsf/lsf.h
mbd.jgrp.$(OEXT):	mbd.h ../../lsf/lib/lib.table.h daemonout.h daemons.h\
		../lsbatch.h ../../lsf/lsf.h
mbd.dep.$(OEXT):	mbd.h ../../lsf/lib/lib.table.h daemonout.h daemons.h\
		../lsbatch.h ../../lsf/lsf.h
mbd.jarray.$(OEXT):	mbd.h ../../lsf/lib/lib.table.h daemonout.h daemons.h\
		../lsbatch.h ../../lsf/lsf.h
mbd.policy.$(OEXT):	mbd.h ../../lsf/lib/lib.table.h daemonout.h daemons.h\
		../lsbatch.h ../../lsf/lsf.h 
mbd.log.$(OEXT):	mbd.h ../../lsf/lib/lib.table.h daemonout.h daemons.h\
		../lsbatch.h ../../lsf/lsf.h
mbd.main.$(OEXT):	mbd.h ../../lsf/lib/lib.table.h daemonout.h daemons.h\
		../lsbatch.h ../../lsf/lsf.h 
mbd.misc.$(OEXT):	mbd.h ../../lsf/lib/lib.table.h daemonout.h daemons.h\
		../lsbatch.h ../../lsf/lsf.h
mbd.queue.$(OEXT):	mbd.h ../../lsf/lib/lib.table.h daemonout.h daemons.h\
		../lsbatch.h ../../lsf/lsf.h
mbd.serv.$(OEXT):	mbd.h ../../lsf/lib/lib.table.h daemonout.h daemons.h\
		../lsbatch.h ../../lsf/lsf.h 
mbd.window.$(OEXT):     mbd.h ../../lsf/lib/lib.table.h daemonout.h daemons.h\
                ../lsbatch.h ../../lsf/lsf.h
mbd.resource.$(OEXT):	mbd.h ../../lsf/lib/lib.table.h daemonout.h daemons.h\
		../lsbatch.h ../../lsf/lsf.h 
mbd.requeue.$(OEXT):	mbd.h ../../lsf/lib/lib.table.h daemonout.h daemons.h\
		../lsbatch.h ../../lsf/lsf.h 
mbd.proxy.$(OEXT): mbd.h ../../lsf/lib/lib.table.h daemonout.h daemons.h\
		../lsbatch.h ../../lsf/lsf.h 
misc.$(OEXT):	../lsbatch.h ../../lsf/lib/mls.h ../../lsf/lsf.h daemons.h
elock.$(OEXT):	../lsbatch.h ../../lsf/lsf.h daemons.h
mail.$(OEXT):	../lsbatch.h ../../lsf/lsf.h daemons.h
sbd.comm.$(OEXT):	sbd.h daemons.h daemonout.h ../lsbatch.h\
		../../lsf/lsf.h
sbd.job.$(OEXT):	sbd.h daemons.h daemonout.h ../lsbatch.h\
		../../lsf/lib/mls.h ../../lsf/lsf.h 
sbd.policy.$(OEXT):	sbd.h daemons.h daemonout.h ../lsbatch.h\
		../../lsf/lsf.h 
sbd.main.$(OEXT):	sbd.h daemons.h daemonout.h ../lsbatch.h\
		../../lsf/lsf.h 
sbd.misc.$(OEXT):	sbd.h daemons.h
sbd.serv.$(OEXT):	sbd.h daemons.h daemonout.h ../lsbatch.h\
		../../lsf/lsf.h
sbd.file.$(OEXT):	sbd.h daemons.h daemonout.h ../lsbatch.h\
		../../lsf/lib/mls.h ../../lsf/lsf.h
sbd.sig.$(OEXT):	sbd.h daemons.h daemonout.h ../lsbatch.h\
		../../lsf/lib/mls.h ../../lsf/lsf.h
sbd.xdr.$(OEXT):	sbd.h daemons.h daemonout.h ../lsbatch.h\
		../../lsf/lsf.h
sbd.misc.$(OEXT):	sbd.h daemons.h daemonout.h ../lsbatch.h\
		../../lsf/lsf.h
