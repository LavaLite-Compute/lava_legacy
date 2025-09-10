# $Id: Makefile,v 1.14 2007/08/15 22:18:43 tmizan Exp $
############################################################################
#
# Makefile for Lsbatch Commands
#
###########################################################################
TOP = ../..
include $(TOP)/Make.misc

.SUFFIXES: .$(OEXT)

INTLIB=$(TOP)/lsf/intlib/lsfint.$(LEXT)
LSFLIB=$(TOP)/lsf/lib/liblsf.$(LEXT)
LSBLIB=$(TOP)/lsbatch/lib/libbat.$(LEXT)

LIBS =  $(LSBLIB) $(LSFLIB) $(INTLIB) ${LDLLIB} ${BSDLIB}

CFLAGS = ${EXTERN_CFLAGS} -I../.. 

OBJS_BSUB       = bsub.$(OEXT) cmd.sub.$(OEXT) cmd.jobid.$(OEXT) \
		  cmd.err.$(OEXT) 
OBJS_BRESTART   = brestart.$(OEXT) cmd.sub.$(OEXT) cmd.jobid.$(OEXT) \
		  cmd.err.$(OEXT) 
OBJS_BJOBS   = bjobs.$(OEXT) cmd.prt.$(OEXT) cmd.err.$(OEXT) cmd.job.$(OEXT)\
	       cmd.jobid.$(OEXT) cmd.misc.$(OEXT)
OBJS_BKILL   = bkill.$(OEXT) cmd.sig.$(OEXT) cmd.jobid.$(OEXT) cmd.err.$(OEXT)
OBJS_BSWITCH = bswitch.$(OEXT)  cmd.jobid.$(OEXT) cmd.err.$(OEXT)
OBJS_BREQUEUE = brequeue.$(OEXT) cmd.jobid.$(OEXT) \
	        cmd.err.$(OEXT)
OBJS_BTOP    = btop.$(OEXT) cmd.move.$(OEXT) cmd.jobid.$(OEXT) cmd.misc.$(OEXT)\
		cmd.prt.$(OEXT) cmd.err.$(OEXT)
OBJS_BBOT    = bbot.$(OEXT) cmd.move.$(OEXT) cmd.jobid.$(OEXT) cmd.misc.$(OEXT)\
		cmd.prt.$(OEXT) cmd.err.$(OEXT)
OBJS_BQUEUES = bqueues.$(OEXT) cmd.prt.$(OEXT) cmd.misc.$(OEXT)
OBJS_BHOSTS  = bhosts.$(OEXT)  cmd.prt.$(OEXT) cmd.misc.$(OEXT)
OBJS_BUSERS  = busers.$(OEXT) cmd.misc.$(OEXT)
OBJS_BPARAMS  = bparams.$(OEXT)
OBJS_BPEEK   = bpeek.$(OEXT) cmd.err.$(OEXT) cmd.jobid.$(OEXT) \
		cmd.misc.$(OEXT) cmd.prt.$(OEXT)
OBJS_BMGROUP   = bmgroup.$(OEXT)  cmd.misc.$(OEXT) 
OBJS_BADMIN  = badmin.$(OEXT) cmd.bqc.$(OEXT) cmd.hist.$(OEXT)\
	       cmd.bhc.$(OEXT) cmd.misc.$(OEXT) cmd.job.$(OEXT)\
               ../../lsf/lsadm/startup.$(OEXT) cmd.prt.$(OEXT)
OBJS_BMIG     = bmig.$(OEXT) cmd.jobid.$(OEXT) cmd.err.$(OEXT)
OBJS_BMOD     = bmod.$(OEXT) cmd.sub.$(OEXT) cmd.jobid.$(OEXT) \
	       cmd.err.$(OEXT)
OBJS_BRUN       = brun.$(OEXT) cmd.jobid.$(OEXT) cmd.err.$(OEXT)

BATCH_BIN = bjobs$(EEXT) bsub$(EEXT) badmin$(EEXT) bmgroup$(EEXT) \
		bmod$(EEXT) bhosts$(EEXT) bparams$(EEXT) busers$(EEXT) \
		bqueues$(EEXT) bkill$(EEXT) bpeek$(EEXT) brun$(EEXT) \
		bswitch$(EEXT)	 brequeue$(EEXT) btop$(EEXT) bbot$(EEXT) \
		brestart$(EEXT) bmig$(EEXT)


build all:	$(BATCH_BIN)

.c.$(OEXT):     $<
	${CC} ${CFLAGS} $(OUTF) -c $<

bsub$(EEXT):	${OBJS_BSUB} $(LIBS) 
	$(CC) ${CFLAGS} ${OBJS_BSUB} ${LIBS}  $(OUTF)

brestart$(EEXT):	${OBJS_BRESTART} ${LIBS}
	$(CC) ${CFLAGS} ${OBJS_BRESTART} ${LIBS} $(OUTF)

bjobs$(EEXT): ${OBJS_BJOBS} ${LIBS}
	$(CC) ${CFLAGS} ${OBJS_BJOBS} ${LIBS} $(OUTF)

bkill$(EEXT):	${OBJS_BKILL} ${LIBS}
	$(CC) ${CFLAGS} ${OBJS_BKILL} ${LIBS} $(OUTF)
	rm -f bstop bresume bchkpnt
	$(SYMBLINK) bkill$(EEXT) bstop$(EEXT)
	$(SYMBLINK) bkill$(EEXT) bresume$(EEXT)
	$(SYMBLINK) bkill$(EEXT) bchkpnt$(EEXT)

bswitch$(EEXT): ${OBJS_BSWITCH} ${LIBS}
	$(CC) ${CFLAGS}  ${OBJS_BSWITCH} ${LIBS} $(OUTF)

brequeue$(EEXT): ${OBJS_BREQUEUE} ${LIBS}
	$(CC) ${CFLAGS} ${OBJS_BREQUEUE} ${LIBS} $(OUTF)

btop$(EEXT): ${OBJS_BTOP} ${LIBS}
	$(CC) ${CFLAGS} ${OBJS_BTOP} ${LIBS} $(OUTF)

bbot$(EEXT): ${OBJS_BBOT} ${LIBS}
	$(CC) ${CFLAGS} ${OBJS_BBOT} ${LIBS} $(OUTF)

bqueues$(EEXT): ${OBJS_BQUEUES} ${LIBS}
	$(CC) ${CFLAGS} ${OBJS_BQUEUES} ${LIBS} $(OUTF)

bhosts$(EEXT): ${OBJS_BHOSTS} ${LIBS}
	$(CC) ${CFLAGS} ${OBJS_BHOSTS} ${LIBS} $(OUTF)

busers$(EEXT): ${OBJS_BUSERS} ${LIBS}
	$(CC) ${CFLAGS} ${OBJS_BUSERS} ${LIBS} $(OUTF)

bparams$(EEXT): ${OBJS_BPARAMS} ${LIBS}
	$(CC) ${CFLAGS} ${OBJS_BPARAMS} ${LIBS} $(OUTF)

bpeek$(EEXT): ${OBJS_BPEEK} ${LIBS}
	$(CC) ${CFLAGS} ${OBJS_BPEEK} ${LIBS} $(OUTF)

bmgroup$(EEXT): ${OBJS_BMGROUP} ${LIBS}
	$(CC) ${CFLAGS} ${OBJS_BMGROUP} ${LIBS} $(OUTF)
	rm -f bugroup
	$(SYMBLINK) bmgroup$(EEXT) bugroup$(EEXT)

bmig$(EEXT): ${OBJS_BMIG} ${LIBS}
	$(CC) ${CFLAGS} ${OBJS_BMIG} ${LIBS} $(OUTF)

bmod$(EEXT): ${OBJS_BMOD} ${LIBS}
	$(CC) ${CFLAGS} ${OBJS_BMOD} ${LIBS} $(OUTF)

badmin$(EEXT): ${OBJS_BADMIN} ${LIBS}
	$(CC) ${CFLAGS} ${OBJS_BADMIN} ${LIBS} $(OUTF)

brun$(EEXT) : $(OBJS_BRUN) ${LIBS}
	$(CC) $(CFLAGS) $(OBJS_BRUN) $(LIBS) $(OUTF)

$(INTLIB):
	cd ${@D}; $(MAKE)

$(LSFLIB):
	cd ${@D}; $(MAKE)

$(LSBLIB):
	cd ${@D}; $(MAKE)

brelease: build
	$(INST) ${BATCH_BIN} $(BRELEASE)/$(LM_ARCH)/bin/

clean: 
	rm -f $(COMCLEAN) ${BATCH_BIN}
	rm -f bstop bresume bchkpnt bugroup


# These dependencies are maintained by hand
bmgroup.$(OEXT):	../lsbatch.h cmd.h
bhosts.$(OEXT):	../lsbatch.h cmd.h 
busers.$(OEXT):	../lsbatch.h cmd.h
bparams.$(OEXT):	../lsbatch.h cmd.h
bjobs.$(OEXT):	../lsbatch.h cmd.h
bpeek.$(OEXT):	../lsbatch.h cmd.h
bswitch.$(OEXT):	../lsbatch.h cmd.h
brequeue.$(OEXT): ../lsbatch.h cmd.h    
btop.$(OEXT):		../lsbatch.h cmd.h
bbot.$(OEXT):		../lsbatch.h cmd.h
bqc.$(OEXT):	        ../lsbatch.h cmd.h
bhc.$(OEXT):	        ../lsbatch.h cmd.h
bqueues.$(OEXT):	../lsbatch.h cmd.h
bmod.$(OEXT):	../lsbatch.h cmd.h
badmin.$(OEXT):	../lsbatch.h cmd.h badmin.h
cmd.job.$(OEXT):	../lsbatch.h cmd.h
cmd.sig.$(OEXT):	../lsbatch.h cmd.h
cmd.move.$(OEXT):	../lsbatch.h cmd.h
cmd.sub.$(OEXT):	../lsbatch.h cmd.h ../daemons/daemons.h
cmd.misc.$(OEXT):     ../lsbatch.h cmd.h
cmd.bqc.$(OEXT):     ../lsbatch.h cmd.h
cmd.bhc.$(OEXT):     ../lsbatch.h cmd.h
cmd.hist.$(OEXT):     ../lsbatch.h cmd.h
cmd.breconfig.$(OEXT): ../lsbatch.h cmd.h
