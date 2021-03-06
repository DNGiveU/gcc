/* { dg-do compile } */
/* { dg-options "-O3 -fipa-cp -fipa-cp-clone -fdump-ipa-cp -fno-early-inlining"  } */
/* { dg-add-options bind_pic_locally } */

/* Float & short constants.  */

#include <stdio.h>
void t(void);
int g (float b, short c)
{
  t();
  return c + (int)b;
}
int f (float a)
{
  t();
  /* a is modified.  */
  if (a++ > 0)
    g (a, 3);
}
int main ()
{
  int i;
  for (i = 0; i < 100; i++)
    f (7.6);
  return 0;
}


/* { dg-final { scan-ipa-dump-times "versioned function" 2 "cp"  } } */
/* { dg-final { scan-ipa-dump "replacing param c with const 3" "cp"  } } */
/* { dg-final { scan-ipa-dump "replacing param a with const 7" "cp"  } } */
/* { dg-final { cleanup-ipa-dump "cp" } } */
