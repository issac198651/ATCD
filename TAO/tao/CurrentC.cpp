// -*- C++ -*-
//
// $Id$

// ****  Code generated by the The ACE ORB (TAO) IDL Compiler ****
// TAO and the TAO IDL Compiler have been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// and
//       Distributed Object Computing Laboratory
//       University of California at Irvine
//       Irvine, CA
//       USA
//       http://doc.ece.uci.edu/
// and
//       Institute for Software Integrated Systems
//       Vanderbilt University
//       Nashville, TN
//       USA
//       http://www.isis.vanderbilt.edu/
//
// Information about TAO is available at:
//     http://www.cs.wustl.edu/~schmidt/TAO.html

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_codegen.cpp:301


#include "CurrentC.h"
#include "Typecode.h"

#if defined (__BORLANDC__)
#pragma option -w-rvl -w-rch -w-ccc -w-aus -w-sig
#endif /* __BORLANDC__ */

#if !defined (__ACE_INLINE__)
#include "CurrentC.i"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_arg_traits.cpp:59

// Arg traits specializations.
namespace TAO
{
};

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_interface/interface_cs.cpp:60

// Traits specializations for CORBA::Current.

CORBA::Current_ptr
TAO::Objref_Traits<CORBA::Current>::tao_duplicate (
    CORBA::Current_ptr p
  )
{
  return CORBA::Current::_duplicate (p);
}

void
TAO::Objref_Traits<CORBA::Current>::tao_release (
    CORBA::Current_ptr p
  )
{
  CORBA::release (p);
}

CORBA::Current_ptr
TAO::Objref_Traits<CORBA::Current>::tao_nil (void)
{
  return CORBA::Current::_nil ();
}

CORBA::Boolean
TAO::Objref_Traits<CORBA::Current>::tao_marshal (
    CORBA::Current_ptr p,
    TAO_OutputCDR & cdr
  )
{
  return p->marshal (cdr);
}

// Function pointer for collocation factory initialization.
TAO::Collocation_Proxy_Broker *
(*CORBA__TAO_Current_Proxy_Broker_Factory_function_pointer) (
    CORBA::Object_ptr obj
  ) = 0;

CORBA::Current::Current (void)
{}

CORBA::Current::~Current (void)
{}

CORBA::Current_ptr
CORBA::Current::_narrow (
    CORBA::Object_ptr _tao_objref
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (CORBA::is_nil (_tao_objref))
    {
      return Current::_nil ();
    }

  Current_ptr proxy =
    dynamic_cast<Current_ptr> (_tao_objref);

  return Current::_duplicate (proxy);
}

CORBA::Current_ptr
CORBA::Current::_duplicate (Current_ptr obj)
{
  if (! CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }

  return obj;
}

CORBA::Boolean
CORBA::Current::_is_a (
    const char *value
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (
      !ACE_OS::strcmp (
          (char *)value,
          "IDL:omg.org/CORBA/Current:1.0"
        ) ||
      !ACE_OS::strcmp (
          (char *)value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) ||
      !ACE_OS::strcmp (
          (char *)value,
          "IDL:omg.org/CORBA/Object:1.0"
        )
     )
    {
      return 1; // success using local knowledge
    }
  else
    {
      return 0;
    }
}

const char* CORBA::Current::_interface_repository_id (void) const
{
  return "IDL:omg.org/CORBA/Current:1.0";
}

CORBA::Boolean
CORBA::Current::marshal (TAO_OutputCDR &)
{
  return 0;
}

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_typecode/typecode_defn.cpp:284

static const CORBA::Long _oc_CORBA_Current[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  30,
  ACE_NTOHL (0x49444c3a),
  ACE_NTOHL (0x6f6d672e),
  ACE_NTOHL (0x6f72672f),
  ACE_NTOHL (0x434f5242),
  ACE_NTOHL (0x412f4375),
  ACE_NTOHL (0x7272656e),
  ACE_NTOHL (0x743a312e),
  ACE_NTOHL (0x30000000),  // repository ID = IDL:omg.org/CORBA/Current:1.0
    8,
  ACE_NTOHL (0x43757272),
  ACE_NTOHL (0x656e7400),  // name = Current
  };

static CORBA::TypeCode _tc_TAO_tc_CORBA_Current (
    CORBA::tk_objref,
    sizeof (_oc_CORBA_Current),
    (char *) &_oc_CORBA_Current,
    0,
    sizeof (CORBA::Current)
  );

namespace CORBA
{
  ::CORBA::TypeCode_ptr _tc_Current =
    &_tc_TAO_tc_CORBA_Current;
}

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_root/root.cpp:1703

#if defined (ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION)

  template class
    TAO_Objref_Var_T<
        CORBA::Current,
        TAO::Objref_Traits<CORBA::Current>
      >;

  template class
    TAO_Objref_Out_T<
        CORBA::Current,
        TAO::Objref_Traits<CORBA::Current>
      >;

#elif defined (ACE_HAS_TEMPLATE_INSTANTIATION_PRAGMA)

# pragma instantiate \
    TAO_Objref_Var_T< \
        CORBA::Current, \
        TAO::Objref_Traits<CORBA::Current> \
      >

# pragma instantiate \
    TAO_Objref_Out_T< \
        CORBA::Current, \
        TAO::Objref_Traits<CORBA::Current> \
      >

#endif /* !ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION */
