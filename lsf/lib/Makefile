#$Id: Makefile,v 1.9 2007/08/15 22:18:50 tmizan Exp $
############################################################################
#
# Makefile for LIB
#
############################################################################

TOP = ../..
include $(TOP)/Make.misc

.SUFFIXES: .$(OEXT) 

CFLAGS = ${EXTERN_CFLAGS}
LDFLAGS = ${EXTERN_LDFLAGS}

OBJS = lib.eligible.${OEXT} lib.init.${OEXT} lib.lim.${OEXT} lib.info.${OEXT} \
       lib.sock.${OEXT} lib.control.${OEXT} lib.res.${OEXT} lib.misc.${OEXT}\
       lib.xdr.${OEXT} lib.err.${OEXT} lib.nios.${OEXT} lib.term.${OEXT} \
       lib.tty.${OEXT} lib.table.${OEXT}  lib.words.${OEXT} lib.load.${OEXT} \
       lib.place.${OEXT} lib.syntax.${OEXT} lib.rdwr.${OEXT}  lib.sig.${OEXT} \
       lib.initenv.${OEXT} lib.tid.${OEXT} usleep.${OEXT} \
       whathost.${OEXT} lib.xdrres.${OEXT} lib.rf.${OEXT} lib.xdrlim.${OEXT} \
       lib.host.${OEXT} lib.lsf.${OEXT} lib.priority.${OEXT} \
       lib.xdrnio.${OEXT} \
       lib.resctrl.${OEXT}  lib.reslog.${OEXT} lib.xdrmisc.${OEXT} \
       lib.xdrrf.${OEXT} lib.cwd.${OEXT} lib.errno.${OEXT} lib.conn.${OEXT}  \
       lib.rwait.${OEXT} lib.rtask.${OEXT} lib.rex.${OEXT} lib.limits.${OEXT} \
       lib.syslog.${OEXT} lib.esub.${OEXT} lib.channel.${OEXT} \
       lib.eauth.${OEXT} lib.osal.$(OEXT) \
       lib.confmisc.$(OEXT) lib.conf.$(OEXT) lib.i18n.$(OEXT) lib.pim.$(OEXT) \
       lib.queue.$(OEXT) lib.hosta.${OEXT} lib.nioback.$(OEXT) lib.rcp.$(OEXT) \
       lib.debug.$(OEXT) lib.wconf.$(OEXT) lib.rmi.$(OEXT) \
       lib.dir.$(OEXT) lib.utmp.$(OEXT) lib.so.$(OEXT) lib.id.$(OEXT)

LIB = liblsf.${LEXT}


all build:	${LIB}

${LIB}:      ${OBJS}
	${LD} ${LDFLAGS} ${OBJS} 
	${RANLIB} $@

.c.$(OEXT):	$<
	${CC} ${CFLAGS} $(OUTF) -c $<

brelease:	build
	$(INST) -m 644 ${LIB} $(BRELEASE)/$(LM_ARCH)/lib/${LIB}

clean:
	rm -f $(COMCLEAN) $(LIB)


# These dependencies are maintained by hand
# lib.h and the files it includes
LIB_H = lib.h ../lsf.h ../lim/limout.h ../../config.h lproto.h lsi18n.h
$(OBJS):	$(LIB_H)
lib.syslog.$(OEXT):    $(LIB_H) ../intlib/intlib.h
lib.conn.$(OEXT):	$(LIB_H) lib.table.h
lib.control.$(OEXT):	$(LIB_H) lib.xdr.h
lib.eligible.$(OEXT):	$(LIB_H) lib.table.h
lib.err.$(OEXT):	$(LIB_H)
lib.info.$(OEXT):	$(LIB_H) lib.xdr.h
lib.init.$(OEXT):	$(LIB_H) lib.queue.h mls.h
lib.lim.$(OEXT):	$(LIB_H)
lib.load.$(OEXT):	$(LIB_H) lib.xdr.h 
lib.rdwr.$(OEXT):	$(LIB_H) lib.xdr.h
lib.misc.$(OEXT):	$(LIB_H)
lib.place.$(OEXT):	$(LIB_H) 
lib.res.$(OEXT):	$(LIB_H) ../res/resout.h ../res/nios.h lib.hdr.h \
			lib.xdrres.h ../res/rescom.h lib.xdr.h \
		        lib.queue.h
lib.sock.$(OEXT):	$(LIB_H)
lib.syntax.$(OEXT):	$(LIB_H) 
lib.table.$(OEXT):	$(LIB_H) lib.table.h
lib.queue.$(OEXT):      $(LIB_H) lib.queue.h
lib.term.$(OEXT):	$(LIB_H) ../res/resout.h lib.xdrres.h lib.hdr.h \
			lib.xdr.h
lib.sig.$(OEXT):	../../config.h
lib.words.$(OEXT):	$(LIB_H) lib.words.h
lib.xdr.$(OEXT):	$(LIB_H) lib.xdr.h 
lib.xdrlim.$(OEXT):   $(LIB_H) lib.xdrlim.h
lib.xdrres.$(OEXT):   $(LIB_H) lib.xdrres.h lib.hdr.h lib.xdr.h \
		lib.rf.h
usleep.$(OEXT):	../../config.h
lib.priority.$(OEXT):	../../config.h
lib.rf.$(OEXT):	$(LIB_H) ../res/resout.h ../res/nios.h lib.hdr.h \
                lib.xdrres.h ../res/rescom.h lib.xdr.h lib.rf.h
lib.nios.$(OEXT):     $(LIB_H)
lib.xdrmisc.$(OEXT):  $(LIB_H) lib.xdr.h 
lib.xdrnio.$(OEXT):	$(LIB_H)
lib.resctrl.$(OEXT):	$(LIB_H) 
lib.reslog.$(OEXT):	$(LIB_H) 
lib.xdrrf.$(OEXT):	$(LIB_H) lib.xdr.h
lib.esub.$(OEXT):	$(LIB_H) mls.h
lib.eauth.$(OEXT):	$(LIB_H) mls.h
lib.channel.$(OEXT):  $(LIB_H) lib.channel.h
lib.confmisc.$(OEXT): $(LIB_H) 
lib.conf.$(OEXT):     $(LIB_H) lib.conf.h
lib.pim.$(OEXT):      $(LIB_H) lib.pim.h
lib.osal.$(OEXT):     $(LIB_H) lib.osux.h
lib.host.$(OEXT):     $(LIB_H) mls.h
lib.dir.$(OEXT):      $(LIB_H) mls.h
lib.rex.$(OEXT):      $(LIB_H) mls.h
lib.rtask.$(OEXT):    $(LIB_H) lib.queue.h mls.h ../res/nios.h ../res/resout.h
lib.so.$(OEXT):       lib.so.h
lib.id.$(OEXT):       $(LIB_H)
