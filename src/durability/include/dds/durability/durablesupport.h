/****************************************************************

  IMPORTANT:

  The file contains the definitions for the client durability related topics.
  This file is partially copied from the output generated by durabledupport.idl
  because we cannot generate code from an idl file due to cyclic dependencies
  in idlc_generate().

*****************************************************************/
#ifndef DURABLE_SUPPORT_H
#define DURABLE_SUPPORT_H

#include "dds/ddsc/dds_public_impl.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef uint8_t DurableSupport_id_t[16];

#define DurableSupport_id_t__alloc() \
((DurableSupport_id_t*) dds_alloc (sizeof (DurableSupport_id_t)));

typedef uint64_t DurableSupport_session_id_t;

#define DurableSupport_session_id_t__alloc() \
((DurableSupport_session_id_t*) dds_alloc (sizeof (DurableSupport_session_id_t)));

typedef uint16_t DurableSupport_session_kind_t;

#define DurableSupport_session_kind_t__alloc() \
((DurableSupport_session_kind_t*) dds_alloc (sizeof (DurableSupport_session_kind_t)));

typedef uint16_t DurableSupport_beadtype_t;

#define DurableSupport_beadtype_t__alloc() \
((DurableSupport_beadtype_t*) dds_alloc (sizeof (DurableSupport_beadtype_t)));

typedef struct DurableSupport_status
{
  DurableSupport_id_t id;
  char * hostname;
  char * name;
} DurableSupport_status;

extern const dds_topic_descriptor_t DurableSupport_status_desc;

#define DurableSupport_status__alloc() \
((DurableSupport_status*) dds_alloc (sizeof (DurableSupport_status)));

#define DurableSupport_status_free(d,o) \
dds_sample_free ((d), &DurableSupport_status_desc, (o))

typedef struct DurableSupport_range
{
  uint64_t lb;
  uint64_t ub;
} DurableSupport_range;

#ifndef DDS_SEQUENCE_DURABLESUPPORT_RANGE_DEFINED
#define DDS_SEQUENCE_DURABLESUPPORT_RANGE_DEFINED
typedef struct dds_sequence_DurableSupport_range
{
  uint32_t _maximum;
  uint32_t _length;
  struct DurableSupport_range *_buffer;
  bool _release;
} dds_sequence_DurableSupport_range;

#define dds_sequence_DurableSupport_range__alloc() \
((dds_sequence_DurableSupport_range*) dds_alloc (sizeof (dds_sequence_DurableSupport_range)));

#define dds_sequence_DurableSupport_range_allocbuf(l) \
((struct DurableSupport_range *) dds_alloc ((l) * sizeof (struct DurableSupport_range)))
#endif /* DDS_SEQUENCE_DURABLESUPPORT_RANGE_DEFINED */

typedef struct DurableSupport_writer
{
  DurableSupport_id_t id;
  uint32_t flags;
  dds_sequence_DurableSupport_range ranges;
} DurableSupport_writer;

#ifndef DDS_SEQUENCE_DURABLESUPPORT_WRITER_DEFINED
#define DDS_SEQUENCE_DURABLESUPPORT_WRITER_DEFINED
typedef struct dds_sequence_DurableSupport_writer
{
  uint32_t _maximum;
  uint32_t _length;
  struct DurableSupport_writer *_buffer;
  bool _release;
} dds_sequence_DurableSupport_writer;

#define dds_sequence_DurableSupport_writer__alloc() \
((dds_sequence_DurableSupport_writer*) dds_alloc (sizeof (dds_sequence_DurableSupport_writer)));

#define dds_sequence_DurableSupport_writer_allocbuf(l) \
((struct DurableSupport_writer *) dds_alloc ((l) * sizeof (struct DurableSupport_writer)))
#endif /* DDS_SEQUENCE_DURABLESUPPORT_WRITER_DEFINED */

typedef struct DurableSupport_set
{
  char * partition;
  char * tpname;
  char * type_id;
  uint32_t flags;
  dds_sequence_DurableSupport_writer writers;
} DurableSupport_set;

#ifndef DDS_SEQUENCE_DURABLESUPPORT_SET_DEFINED
#define DDS_SEQUENCE_DURABLESUPPORT_SET_DEFINED
typedef struct dds_sequence_DurableSupport_set
{
  uint32_t _maximum;
  uint32_t _length;
  struct DurableSupport_set *_buffer;
  bool _release;
} dds_sequence_DurableSupport_set;

#define dds_sequence_DurableSupport_set__alloc() \
((dds_sequence_DurableSupport_set*) dds_alloc (sizeof (dds_sequence_DurableSupport_set)));

#define dds_sequence_DurableSupport_set_allocbuf(l) \
((struct DurableSupport_set *) dds_alloc ((l) * sizeof (struct DurableSupport_set)))
#endif /* DDS_SEQUENCE_DURABLESUPPORT_SET_DEFINED */

typedef struct DurableSupport_state
{
  DurableSupport_id_t id;
  char * name;
  dds_sequence_DurableSupport_set sets;
} DurableSupport_state;

extern const dds_topic_descriptor_t DurableSupport_state_desc;

#define DurableSupport_state__alloc() \
((DurableSupport_state*) dds_alloc (sizeof (DurableSupport_state)));

#define DurableSupport_state_free(d,o) \
dds_sample_free ((d), &DurableSupport_state_desc, (o))

#define DurableSupport_BEADTYPE_SESSION 1
#define DurableSupport_BEADTYPE_SET 2
#define DurableSupport_BEADTYPE_WRITER 3
#define DurableSupport_BEADTYPE_DATA 4
#define DurableSupport_SESSION_KIND_START 1
#define DurableSupport_SESSION_KIND_END 2
#define DurableSupport_SESSION_KIND_ABORT 3
typedef struct DurableSupport_session_t
{
  DurableSupport_session_kind_t kind;
  DurableSupport_session_id_t session_id;
} DurableSupport_session_t;

#ifndef DDS_SEQUENCE_DURABLESUPPORT_ID_T_DEFINED
#define DDS_SEQUENCE_DURABLESUPPORT_ID_T_DEFINED
typedef struct dds_sequence_DurableSupport_id_t
{
  uint32_t _maximum;
  uint32_t _length;
  DurableSupport_id_t *_buffer;
  bool _release;
} dds_sequence_DurableSupport_id_t;

#define dds_sequence_DurableSupport_id_t__alloc() \
((dds_sequence_DurableSupport_id_t*) dds_alloc (sizeof (dds_sequence_DurableSupport_id_t)));

#define dds_sequence_DurableSupport_id_t_allocbuf(l) \
((DurableSupport_id_t *) dds_alloc ((l) * sizeof (DurableSupport_id_t)))
#endif /* DDS_SEQUENCE_DURABLESUPPORT_ID_T_DEFINED */

typedef struct DurableSupport_set_t
{
  char * partition;
  char * tpname;
  char * type_id;
  uint32_t flags;
  dds_sequence_DurableSupport_id_t addressees;
} DurableSupport_set_t;

typedef struct DurableSupport_writer_properties_t
{
  bool autodispose;
} DurableSupport_writer_properties_t;

#ifndef DDS_SEQUENCE_DURABLESUPPORT_RANGE_DEFINED
#define DDS_SEQUENCE_DURABLESUPPORT_RANGE_DEFINED
typedef struct dds_sequence_DurableSupport_range
{
  uint32_t _maximum;
  uint32_t _length;
  struct DurableSupport_range *_buffer;
  bool _release;
} dds_sequence_DurableSupport_range;

#define dds_sequence_DurableSupport_range__alloc() \
((dds_sequence_DurableSupport_range*) dds_alloc (sizeof (dds_sequence_DurableSupport_range)));

#define dds_sequence_DurableSupport_range_allocbuf(l) \
((struct DurableSupport_range *) dds_alloc ((l) * sizeof (struct DurableSupport_range)))
#endif /* DDS_SEQUENCE_DURABLESUPPORT_RANGE_DEFINED */

typedef struct DurableSupport_writer_t
{
  DurableSupport_id_t id;
  struct DurableSupport_writer_properties_t properties;
  uint32_t flags;
  dds_sequence_DurableSupport_range ranges;
} DurableSupport_writer_t;

#ifndef DDS_SEQUENCE_OCTET_DEFINED
#define DDS_SEQUENCE_OCTET_DEFINED
typedef struct dds_sequence_octet
{
  uint32_t _maximum;
  uint32_t _length;
  uint8_t *_buffer;
  bool _release;
} dds_sequence_octet;

#define dds_sequence_octet__alloc() \
((dds_sequence_octet*) dds_alloc (sizeof (dds_sequence_octet)));

#define dds_sequence_octet_allocbuf(l) \
((uint8_t *) dds_alloc ((l) * sizeof (uint8_t)))
#endif /* DDS_SEQUENCE_OCTET_DEFINED */

typedef struct DurableSupport_data_t
{
  dds_sequence_octet blob;
} DurableSupport_data_t;

typedef struct DurableSupport_content
{
  DurableSupport_beadtype_t _d;
  union
  {
    struct DurableSupport_session_t session;
    struct DurableSupport_set_t set;
    struct DurableSupport_writer_t writer;
    struct DurableSupport_data_t data;
  } _u;
} DurableSupport_content;

typedef struct DurableSupport_bead
{
  DurableSupport_id_t id;
  struct DurableSupport_content body;
} DurableSupport_bead;

extern const dds_topic_descriptor_t DurableSupport_bead_desc;

#define DurableSupport_bead__alloc() \
((DurableSupport_bead*) dds_alloc (sizeof (DurableSupport_bead)));

#define DurableSupport_bead_free(d,o) \
dds_sample_free ((d), &DurableSupport_bead_desc, (o))

typedef int64_t DurableSupport_duration_t;

#define DurableSupport_duration_t__alloc() \
((DurableSupport_duration_t*) dds_alloc (sizeof (DurableSupport_duration_t)));

typedef uint16_t DurableSupport_responsetype_t;

#define DurableSupport_responsetype_t__alloc() \
((DurableSupport_responsetype_t*) dds_alloc (sizeof (DurableSupport_responsetype_t)));

typedef uint64_t DurableSupport_delivery_id_t;

#define DurableSupport_delivery_id_t__alloc() \
((DurableSupport_delivery_id_t*) dds_alloc (sizeof (DurableSupport_delivery_id_t)));

typedef struct DurableSupport_request
{
  DurableSupport_id_t client;
  char * partition;
  char * tpname;
  char * type_id;
  DurableSupport_duration_t timeout;
} DurableSupport_request;

extern const dds_topic_descriptor_t DurableSupport_request_desc;

#define DurableSupport_request__alloc() \
((DurableSupport_request*) dds_alloc (sizeof (DurableSupport_request)));

#define DurableSupport_request_free(d,o) \
dds_sample_free ((d), &DurableSupport_request_desc, (o))

#define DurableSupport_RESPONSETYPE_SET 1
#define DurableSupport_RESPONSETYPE_DATA 2
typedef struct DurableSupport_response_set_t
{
  DurableSupport_delivery_id_t delivery_id;
  char * partition;
  char * tpname;
  char * type_id;
  uint32_t flags;
} DurableSupport_response_set_t;

#ifndef DDS_SEQUENCE_OCTET_DEFINED
#define DDS_SEQUENCE_OCTET_DEFINED
typedef struct dds_sequence_octet
{
  uint32_t _maximum;
  uint32_t _length;
  uint8_t *_buffer;
  bool _release;
} dds_sequence_octet;

#define dds_sequence_octet__alloc() \
((dds_sequence_octet*) dds_alloc (sizeof (dds_sequence_octet)));

#define dds_sequence_octet_allocbuf(l) \
((uint8_t *) dds_alloc ((l) * sizeof (uint8_t)))
#endif /* DDS_SEQUENCE_OCTET_DEFINED */

typedef struct DurableSupport_response_data_t
{
  dds_sequence_octet blob;
} DurableSupport_response_data_t;

typedef struct DurableSupport_response_content
{
  DurableSupport_responsetype_t _d;
  union
  {
    struct DurableSupport_response_set_t set;
    struct DurableSupport_response_data_t data;
  } _u;
} DurableSupport_response_content;

typedef struct DurableSupport_response
{
  DurableSupport_id_t id;
  struct DurableSupport_response_content body;
} DurableSupport_response;

extern const dds_topic_descriptor_t DurableSupport_response_desc;

#define DurableSupport_response__alloc() \
((DurableSupport_response*) dds_alloc (sizeof (DurableSupport_response)));

#define DurableSupport_response_free(d,o) \
dds_sample_free ((d), &DurableSupport_response_desc, (o))

#ifdef __cplusplus
}
#endif

#endif /* DURABLE_SUPPORT_H */
