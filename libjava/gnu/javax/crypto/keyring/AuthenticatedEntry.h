
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_keyring_AuthenticatedEntry__
#define __gnu_javax_crypto_keyring_AuthenticatedEntry__

#pragma interface

#include <gnu/javax/crypto/keyring/MaskableEnvelopeEntry.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace crypto
      {
        namespace keyring
        {
            class AuthenticatedEntry;
            class Properties;
        }
        namespace mac
        {
            class IMac;
        }
      }
    }
  }
}

class gnu::javax::crypto::keyring::AuthenticatedEntry : public ::gnu::javax::crypto::keyring::MaskableEnvelopeEntry
{

public:
  AuthenticatedEntry(::java::lang::String *, jint, ::gnu::javax::crypto::keyring::Properties *);
private:
  AuthenticatedEntry();
public:
  static ::gnu::javax::crypto::keyring::AuthenticatedEntry * decode(::java::io::DataInputStream *);
  void authenticate(JArray< jbyte > *);
  void verify(JArray< jbyte > *);
public: // actually protected
  void encodePayload();
private:
  ::gnu::javax::crypto::mac::IMac * getMac(JArray< jbyte > *);
public:
  static const jint TYPE = 2;
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_crypto_keyring_AuthenticatedEntry__
