# $Id: Makefile,v 1.15 2007/08/15 22:18:47 tmizan Exp $
############################################################################
#
# Makefile for Lsbatch Library
#
###########################################################################
TOP = ../..
include $(TOP)/Make.misc

.SUFFIXES: .$(OEXT)

CFLAGS = ${EXTERN_CFLAGS} -I$(TOP)
LDFLAGS = ${EXTERN_LDFLAGS}


OBJS = lsb.groups.$(OEXT) lsb.hosts.$(OEXT) lsb.init.$(OEXT) lsb.jobs.$(OEXT)\
       lsb.misc.$(OEXT) lsb.peek.$(OEXT) lsb.qc.$(OEXT) lsb.queues.$(OEXT) \
       lsb.hc.$(OEXT) lsb.reconfig.$(OEXT) lsb.sig.$(OEXT) lsb.sub.$(OEXT) \
       lsb.xdr.$(OEXT) lsb.err.$(OEXT) lsb.move.$(OEXT) lsb.switch.$(OEXT) \
       lsb.users.$(OEXT) lsb.log.$(OEXT) lsb.comm.$(OEXT) \
       lsb.reason.$(OEXT) lsb.mig.$(OEXT) lsb.params.$(OEXT) lsb.spool.$(OEXT)\
       lsb.modify.$(OEXT) lsb.msg.$(OEXT) lsb.conf.$(OEXT) \
       lsb.resource.$(OEXT) lsb.signals.$(OEXT) lsb.debug.$(OEXT) \
       lsb.rexecv.$(OEXT)

LIB = libbat.${LEXT}  


all build:	${LIB}

.c.$(OEXT):   $<
	${CC} ${CFLAGS} $(OUTF) -c $<

${LIB}:       ${OBJS}
	${LD} ${LDFLAGS} ${OBJS} 
	${RANLIB} $@

brelease:	build
	$(INST) -m 644 ${LIB} $(BRELEASE)/$(LM_ARCH)/lib/${LIB}

clean:
	rm -f $(COMCLEAN) $(LIB)


# These dependencies are maintained by hand
LIB_H = ../daemons/daemonout.h lsb.h ../lsbatch.h ../../lsf/lsf.h ../../config.h
$(OBJS):         $(LIB_H)
lsb.comm.o: ../daemons/daemonout.h lsb.h ../lsbatch.h
lsb.groups.o: ../daemons/daemonout.h lsb.h lsb.xdr.h ../lsbatch.h
lsb.hosts.o: ../daemons/daemonout.h lsb.h lsb.xdr.h ../lsbatch.h
lsb.users.o: ../daemons/daemonout.h lsb.h lsb.xdr.h ../lsbatch.h
lsb.params.o: ../daemons/daemonout.h lsb.h lsb.xdr.h ../lsbatch.h
lsb.init.o: ../daemons/daemonout.h lsb.h ../lsbatch.h
lsb.jobs.o: ../daemons/daemonout.h lsb.h lsb.xdr.h ../lsbatch.h
lsb.spool.o: ../daemons/daemonout.h lsb.h lsb.xdr.h ../lsbatch.h ../../lsf/lib/mls.h
lsb.misc.o: ../daemons/daemonout.h lsb.h ../daemons/daemons.h ../lsbatch.h
lsb.peek.o: ../daemons/daemonout.h lsb.h lsb.xdr.h ../lsbatch.h
lsb.qc.o: ../daemons/daemonout.h lsb.h lsb.xdr.h ../lsbatch.h
lsb.queues.o: ../daemons/daemonout.h lsb.h lsb.xdr.h ../lsbatch.h
lsb.hc.o: ../daemons/daemonout.h lsb.h lsb.xdr.h ../lsbatch.h
lsb.reconfig.o: ../daemons/daemonout.h lsb.h lsb.xdr.h ../lsbatch.h
lsb.sig.o: ../daemons/daemonout.h lsb.h lsb.xdr.h ../lsbatch.h
lsb.sub.o: ../daemons/daemonout.h lsb.h lsb.xdr.h  ../lsbatch.h ../../lsf/lib/mls.h
lsb.xdr.o: ../daemons/daemonout.h lsb.h lsb.xdr.h  ../lsbatch.h
lsb.err.o: ../daemons/daemonout.h lsb.h ../lsbatch.h
lsb.move.o: ../daemons/daemonout.h lsb.h lsb.xdr.h ../lsbatch.h
lsb.switch.o: ../daemons/daemonout.h lsb.h lsb.xdr.h ../lsbatch.h
lsb.modify.o: ../daemons/daemonout.h lsb.h lsb.xdr.h ../lsbatch.h
lsb.log.o: lsb.h ../lsbatch.h
lsb.conf.o: lsb.h ../lsbatch.h
lsb.resource.o: lsb.h ../lsbatch.h ../../lsf/intlib/intlibout.h
lsb.estatus.o: lsb.h
