

example: cudec.o example.o
	$(CC) -o $@ cudec.o example.o

XFILES= \
	x000.c x001.c x002.c x003.c x004.c x005.c x006.c x007.c x009.c x00a.c \
	x00b.c x00c.c x00d.c x00e.c x00f.c x010.c x011.c x012.c x013.c x014.c \
	x015.c x016.c x017.c x018.c x01d.c x01e.c x01f.c x020.c x021.c x022.c \
	x023.c x024.c x025.c x026.c x027.c x028.c x029.c x02a.c x02c.c x02e.c \
	x02f.c x030.c x031.c x032.c x033.c x04d.c x04e.c x04f.c x050.c x051.c \
	x052.c x053.c x054.c x055.c x056.c x057.c x058.c x059.c x05a.c x05b.c \
	x05c.c x05d.c x05e.c x05f.c x060.c x061.c x062.c x063.c x064.c x065.c \
	x066.c x067.c x068.c x069.c x06a.c x06b.c x06c.c x06d.c x06e.c x06f.c \
	x070.c x071.c x072.c x073.c x074.c x075.c x076.c x077.c x078.c x079.c \
	x07a.c x07b.c x07c.c x07d.c x07e.c x07f.c x080.c x081.c x082.c x083.c \
	x084.c x085.c x086.c x087.c x088.c x089.c x08a.c x08b.c x08c.c x08d.c \
	x08e.c x08f.c x090.c x091.c x092.c x093.c x094.c x095.c x096.c x097.c \
	x098.c x099.c x09a.c x09b.c x09c.c x09d.c x09e.c x09f.c x0a0.c x0a1.c \
	x0a2.c x0a3.c x0a4.c x0ac.c x0ad.c x0ae.c x0af.c x0b0.c x0b1.c x0b2.c \
	x0b3.c x0b4.c x0b5.c x0b6.c x0b7.c x0b8.c x0b9.c x0ba.c x0bb.c x0bc.c \
	x0bd.c x0be.c x0bf.c x0c0.c x0c1.c x0c2.c x0c3.c x0c4.c x0c5.c x0c6.c \
	x0c7.c x0c8.c x0c9.c x0ca.c x0cb.c x0cc.c x0cd.c x0ce.c x0cf.c x0d0.c \
	x0d1.c x0d2.c x0d3.c x0d4.c x0d5.c x0d6.c x0d7.c x0f9.c x0fa.c x0fb.c \
	x0fc.c x0fd.c x0fe.c x0ff.c x1d4.c x1d5.c x1d6.c x1d7.c x1f1.c x1f6.c

cudec.o: cudec.c $(XFILES) Makefile
example.o: example.c cudec.h Makefile

