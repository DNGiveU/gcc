
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_xml_transform_StreamSerializer__
#define __gnu_xml_transform_StreamSerializer__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace xml
    {
      namespace transform
      {
          class StreamSerializer;
      }
    }
  }
  namespace java
  {
    namespace nio
    {
      namespace charset
      {
          class Charset;
          class CharsetEncoder;
      }
    }
  }
  namespace org
  {
    namespace w3c
    {
      namespace dom
      {
          class Attr;
          class Node;
      }
    }
  }
}

class gnu::xml::transform::StreamSerializer : public ::java::lang::Object
{

public:
  StreamSerializer();
  StreamSerializer(::java::lang::String *);
  StreamSerializer(jint, ::java::lang::String *, ::java::lang::String *);
public: // actually package-private
  virtual void setCdataSectionElements(::java::util::Collection *);
public:
  virtual void serialize(::org::w3c::dom::Node *, ::java::io::OutputStream *);
public: // actually package-private
  virtual void serialize(::org::w3c::dom::Node *, ::java::io::OutputStream *, jboolean);
private:
  void doSerialize(::org::w3c::dom::Node *, ::java::io::OutputStream *, jboolean);
public: // actually package-private
  virtual jboolean isHTMLElement(::org::w3c::dom::Node *, ::java::lang::String *);
  virtual jboolean isDefined(::java::lang::String *, ::java::lang::String *);
  virtual void pushNamespaceContext();
  virtual ::java::lang::String * define(::java::lang::String *, ::java::lang::String *);
  virtual void popNamespaceContext();
  virtual JArray< jbyte > * encodeText(::java::lang::String *);
  virtual ::java::lang::String * encode(::java::lang::String *, jboolean, jboolean);
  virtual ::java::lang::String * toString(::org::w3c::dom::Node *);
  virtual jboolean isHTMLBoolean(::org::w3c::dom::Attr *, ::java::lang::String *);
  static ::java::lang::String * getHTMLCharacterEntity(jchar);
  static const jint SPACE = 32;
  static const jint BANG = 33;
  static const jint APOS = 39;
  static const jint SLASH = 47;
  static const jint BRA = 60;
  static const jint KET = 62;
  static const jint EQ = 61;
  static ::java::util::Map * HTML_BOOLEAN_ATTRIBUTES;
  static ::java::util::HashSet * HTML_URIS;
public: // actually protected
  ::java::lang::String * __attribute__((aligned(__alignof__( ::java::lang::Object)))) encoding;
public: // actually package-private
  ::java::nio::charset::Charset * charset;
  ::java::nio::charset::CharsetEncoder * encoder;
  jint mode;
  ::java::util::LinkedList * namespaces;
public: // actually protected
  ::java::lang::String * eol;
public: // actually package-private
  ::java::util::Collection * cdataSectionElements;
public: // actually protected
  jboolean discardDefaultContent;
  jboolean xmlDeclaration;
private:
  jboolean htmlEncoded;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_xml_transform_StreamSerializer__
