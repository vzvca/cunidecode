#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>

#include "x000.c"
#include "x001.c"
#include "x002.c"
#include "x003.c"
#include "x004.c"
#include "x005.c"
#include "x006.c"
#include "x007.c"
#include "x009.c"
#include "x00a.c"
#include "x00b.c"
#include "x00c.c"
#include "x00d.c"
#include "x00e.c"
#include "x00f.c"
#include "x010.c"
#include "x011.c"
#include "x012.c"
#include "x013.c"
#include "x014.c"
#include "x015.c"
#include "x016.c"
#include "x017.c"
#include "x018.c"
#include "x01d.c"
#include "x01e.c"
#include "x01f.c"
#include "x020.c"
#include "x021.c"
#include "x022.c"
#include "x023.c"
#include "x024.c"
#include "x025.c"
#include "x026.c"
#include "x027.c"
#include "x028.c"
#include "x029.c"
#include "x02a.c"
#include "x02c.c"
#include "x02e.c"
#include "x02f.c"
#include "x030.c"
#include "x031.c"
#include "x032.c"
#include "x033.c"
#include "x04d.c"
#include "x04e.c"
#include "x04f.c"
#include "x050.c"
#include "x051.c"
#include "x052.c"
#include "x053.c"
#include "x054.c"
#include "x055.c"
#include "x056.c"
#include "x057.c"
#include "x058.c"
#include "x059.c"
#include "x05a.c"
#include "x05b.c"
#include "x05c.c"
#include "x05d.c"
#include "x05e.c"
#include "x05f.c"
#include "x060.c"
#include "x061.c"
#include "x062.c"
#include "x063.c"
#include "x064.c"
#include "x065.c"
#include "x066.c"
#include "x067.c"
#include "x068.c"
#include "x069.c"
#include "x06a.c"
#include "x06b.c"
#include "x06c.c"
#include "x06d.c"
#include "x06e.c"
#include "x06f.c"
#include "x070.c"
#include "x071.c"
#include "x072.c"
#include "x073.c"
#include "x074.c"
#include "x075.c"
#include "x076.c"
#include "x077.c"
#include "x078.c"
#include "x079.c"
#include "x07a.c"
#include "x07b.c"
#include "x07c.c"
#include "x07d.c"
#include "x07e.c"
#include "x07f.c"
#include "x080.c"
#include "x081.c"
#include "x082.c"
#include "x083.c"
#include "x084.c"
#include "x085.c"
#include "x086.c"
#include "x087.c"
#include "x088.c"
#include "x089.c"
#include "x08a.c"
#include "x08b.c"
#include "x08c.c"
#include "x08d.c"
#include "x08e.c"
#include "x08f.c"
#include "x090.c"
#include "x091.c"
#include "x092.c"
#include "x093.c"
#include "x094.c"
#include "x095.c"
#include "x096.c"
#include "x097.c"
#include "x098.c"
#include "x099.c"
#include "x09a.c"
#include "x09b.c"
#include "x09c.c"
#include "x09d.c"
#include "x09e.c"
#include "x09f.c"
#include "x0a0.c"
#include "x0a1.c"
#include "x0a2.c"
#include "x0a3.c"
#include "x0a4.c"
#include "x0ac.c"
#include "x0ad.c"
#include "x0ae.c"
#include "x0af.c"
#include "x0b0.c"
#include "x0b1.c"
#include "x0b2.c"
#include "x0b3.c"
#include "x0b4.c"
#include "x0b5.c"
#include "x0b6.c"
#include "x0b7.c"
#include "x0b8.c"
#include "x0b9.c"
#include "x0ba.c"
#include "x0bb.c"
#include "x0bc.c"
#include "x0bd.c"
#include "x0be.c"
#include "x0bf.c"
#include "x0c0.c"
#include "x0c1.c"
#include "x0c2.c"
#include "x0c3.c"
#include "x0c4.c"
#include "x0c5.c"
#include "x0c6.c"
#include "x0c7.c"
#include "x0c8.c"
#include "x0c9.c"
#include "x0ca.c"
#include "x0cb.c"
#include "x0cc.c"
#include "x0cd.c"
#include "x0ce.c"
#include "x0cf.c"
#include "x0d0.c"
#include "x0d1.c"
#include "x0d2.c"
#include "x0d3.c"
#include "x0d4.c"
#include "x0d5.c"
#include "x0d6.c"
#include "x0d7.c"
#include "x0f9.c"
#include "x0fa.c"
#include "x0fb.c"
#include "x0fc.c"
#include "x0fd.c"
#include "x0fe.c"
#include "x0ff.c"
#include "x1d4.c"
#include "x1d5.c"
#include "x1d6.c"
#include "x1d7.c"
#include "x1f1.c"
#include "x1f6.c"

static char **data[0x01f7];

void cudec_init()
{
  data[0x0000] = data_x000;
  data[0x0001] = data_x001;
  data[0x0002] = data_x002;
  data[0x0003] = data_x003;
  data[0x0004] = data_x004;
  data[0x0005] = data_x005;
  data[0x0006] = data_x006;
  data[0x0007] = data_x007;
  data[0x0009] = data_x009;
  data[0x000a] = data_x00a;
  data[0x000b] = data_x00b;
  data[0x000c] = data_x00c;
  data[0x000d] = data_x00d;
  data[0x000e] = data_x00e;
  data[0x000f] = data_x00f;
  data[0x0010] = data_x010;
  data[0x0011] = data_x011;
  data[0x0012] = data_x012;
  data[0x0013] = data_x013;
  data[0x0014] = data_x014;
  data[0x0015] = data_x015;
  data[0x0016] = data_x016;
  data[0x0017] = data_x017;
  data[0x0018] = data_x018;
  data[0x001d] = data_x01d;
  data[0x001e] = data_x01e;
  data[0x001f] = data_x01f;
  data[0x0020] = data_x020;
  data[0x0021] = data_x021;
  data[0x0022] = data_x022;
  data[0x0023] = data_x023;
  data[0x0024] = data_x024;
  data[0x0025] = data_x025;
  data[0x0026] = data_x026;
  data[0x0027] = data_x027;
  data[0x0028] = data_x028;
  data[0x0029] = data_x029;
  data[0x002a] = data_x02a;
  data[0x002c] = data_x02c;
  data[0x002e] = data_x02e;
  data[0x002f] = data_x02f;
  data[0x0030] = data_x030;
  data[0x0031] = data_x031;
  data[0x0032] = data_x032;
  data[0x0033] = data_x033;
  data[0x004d] = data_x04d;
  data[0x004e] = data_x04e;
  data[0x004f] = data_x04f;
  data[0x0050] = data_x050;
  data[0x0051] = data_x051;
  data[0x0052] = data_x052;
  data[0x0053] = data_x053;
  data[0x0054] = data_x054;
  data[0x0055] = data_x055;
  data[0x0056] = data_x056;
  data[0x0057] = data_x057;
  data[0x0058] = data_x058;
  data[0x0059] = data_x059;
  data[0x005a] = data_x05a;
  data[0x005b] = data_x05b;
  data[0x005c] = data_x05c;
  data[0x005d] = data_x05d;
  data[0x005e] = data_x05e;
  data[0x005f] = data_x05f;
  data[0x0060] = data_x060;
  data[0x0061] = data_x061;
  data[0x0062] = data_x062;
  data[0x0063] = data_x063;
  data[0x0064] = data_x064;
  data[0x0065] = data_x065;
  data[0x0066] = data_x066;
  data[0x0067] = data_x067;
  data[0x0068] = data_x068;
  data[0x0069] = data_x069;
  data[0x006a] = data_x06a;
  data[0x006b] = data_x06b;
  data[0x006c] = data_x06c;
  data[0x006d] = data_x06d;
  data[0x006e] = data_x06e;
  data[0x006f] = data_x06f;
  data[0x0070] = data_x070;
  data[0x0071] = data_x071;
  data[0x0072] = data_x072;
  data[0x0073] = data_x073;
  data[0x0074] = data_x074;
  data[0x0075] = data_x075;
  data[0x0076] = data_x076;
  data[0x0077] = data_x077;
  data[0x0078] = data_x078;
  data[0x0079] = data_x079;
  data[0x007a] = data_x07a;
  data[0x007b] = data_x07b;
  data[0x007c] = data_x07c;
  data[0x007d] = data_x07d;
  data[0x007e] = data_x07e;
  data[0x007f] = data_x07f;
  data[0x0080] = data_x080;
  data[0x0081] = data_x081;
  data[0x0082] = data_x082;
  data[0x0083] = data_x083;
  data[0x0084] = data_x084;
  data[0x0085] = data_x085;
  data[0x0086] = data_x086;
  data[0x0087] = data_x087;
  data[0x0088] = data_x088;
  data[0x0089] = data_x089;
  data[0x008a] = data_x08a;
  data[0x008b] = data_x08b;
  data[0x008c] = data_x08c;
  data[0x008d] = data_x08d;
  data[0x008e] = data_x08e;
  data[0x008f] = data_x08f;
  data[0x0090] = data_x090;
  data[0x0091] = data_x091;
  data[0x0092] = data_x092;
  data[0x0093] = data_x093;
  data[0x0094] = data_x094;
  data[0x0095] = data_x095;
  data[0x0096] = data_x096;
  data[0x0097] = data_x097;
  data[0x0098] = data_x098;
  data[0x0099] = data_x099;
  data[0x009a] = data_x09a;
  data[0x009b] = data_x09b;
  data[0x009c] = data_x09c;
  data[0x009d] = data_x09d;
  data[0x009e] = data_x09e;
  data[0x009f] = data_x09f;
  data[0x00a0] = data_x0a0;
  data[0x00a1] = data_x0a1;
  data[0x00a2] = data_x0a2;
  data[0x00a3] = data_x0a3;
  data[0x00a4] = data_x0a4;
  data[0x00ac] = data_x0ac;
  data[0x00ad] = data_x0ad;
  data[0x00ae] = data_x0ae;
  data[0x00af] = data_x0af;
  data[0x00b0] = data_x0b0;
  data[0x00b1] = data_x0b1;
  data[0x00b2] = data_x0b2;
  data[0x00b3] = data_x0b3;
  data[0x00b4] = data_x0b4;
  data[0x00b5] = data_x0b5;
  data[0x00b6] = data_x0b6;
  data[0x00b7] = data_x0b7;
  data[0x00b8] = data_x0b8;
  data[0x00b9] = data_x0b9;
  data[0x00ba] = data_x0ba;
  data[0x00bb] = data_x0bb;
  data[0x00bc] = data_x0bc;
  data[0x00bd] = data_x0bd;
  data[0x00be] = data_x0be;
  data[0x00bf] = data_x0bf;
  data[0x00c0] = data_x0c0;
  data[0x00c1] = data_x0c1;
  data[0x00c2] = data_x0c2;
  data[0x00c3] = data_x0c3;
  data[0x00c4] = data_x0c4;
  data[0x00c5] = data_x0c5;
  data[0x00c6] = data_x0c6;
  data[0x00c7] = data_x0c7;
  data[0x00c8] = data_x0c8;
  data[0x00c9] = data_x0c9;
  data[0x00ca] = data_x0ca;
  data[0x00cb] = data_x0cb;
  data[0x00cc] = data_x0cc;
  data[0x00cd] = data_x0cd;
  data[0x00ce] = data_x0ce;
  data[0x00cf] = data_x0cf;
  data[0x00d0] = data_x0d0;
  data[0x00d1] = data_x0d1;
  data[0x00d2] = data_x0d2;
  data[0x00d3] = data_x0d3;
  data[0x00d4] = data_x0d4;
  data[0x00d5] = data_x0d5;
  data[0x00d6] = data_x0d6;
  data[0x00d7] = data_x0d7;
  data[0x00f9] = data_x0f9;
  data[0x00fa] = data_x0fa;
  data[0x00fb] = data_x0fb;
  data[0x00fc] = data_x0fc;
  data[0x00fd] = data_x0fd;
  data[0x00fe] = data_x0fe;
  data[0x00ff] = data_x0ff;
  data[0x01d4] = data_x1d4;
  data[0x01d5] = data_x1d5;
  data[0x01d6] = data_x1d6;
  data[0x01d7] = data_x1d7;
  data[0x01f1] = data_x1f1;
  data[0x01f6] = data_x1f6;
}


// give replacement for codepoint
char *cudec_replcp (int cp)
{
  int section, position;
  
  if (cp < 0x80) {
    return data_x000[cp];
  }
  if (cp > 0xeffff) {
    return NULL;
  }
  if ((0xd800 <= cp) && (cp <= 0xdfff)) {
  }

  section = cp >> 8;
  position = cp & 0xff;

  if (data[section] == (char**)0) {
    return NULL;
  }
  return data[section][position];
}

// return codepoint corresponding to utf8 char at c
// advance c depending on number of bytes in utf8 char
int cudec_utf8tocp (char **c)
{
  char *s = *c;
  int r = 0;
  
  if ((s[0] & 0x80) == 0) {
    r = s[0];
    *c = s+1;
  }
  else if (((s[0] & 0xe0) == 0xc0) && ((s[1] & 0xc0) == 0x80)) {
    r = ((s[0] & 0x1f) << 6) | (s[1] & 0x3f);
    *c = s+2;
  }
  else if (((s[0] & 0xf0) == 0xe0) && ((s[1] & 0xc0) == 0x80) && ((s[2] & 0xc0) == 0x80)) {
    r = ((s[0] & 0x0f) << 12) | ((s[1] & 0x3f) << 6) | (s[2] & 0x3f);
    *c = s+3;
  }
  else if (((s[0] & 0xfc) == 0xf0) && ((s[1] & 0xc0) == 0x80) && ((s[2] & 0xc0) == 0x80) && ((s[3] & 0xc0) == 0x80)) {
    r = ((s[0] & 0x03) << 18) | ((s[1] & 0x3f) << 12) | ((s[2] & 0x3f) << 6) | (s[3] & 0x3f);
    *c = s+4;
  }
  else if ((s[0] == 0xf4) && ((s[1] & 0xf0) == 0x80) && ((s[2] & 0xc0) == 0x80) && ((s[3] & 0xc0) == 0x80)) {
    r = ((s[0] & 0x03) << 18) | ((s[1] & 0x3f) << 12) | ((s[2] & 0x3f) << 6) | (s[3] & 0x3f);
    *c = s+4;
  }
  else {
    // erreur encodage UTF-8 - just advance one char
    r = s[0];
    *c = s + 1;
  }
  
  return r;
}

char *cudec_xlat (char *s, char *d)
{
  char *p = d;
  int cp;
  while (*s) {
    cp = cudec_utf8tocp (&s);
    p = stpcpy (p, cudec_replcp (cp));
  }
  return d;
}
