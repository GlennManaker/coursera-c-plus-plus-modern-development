// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: signal.proto

#include "signal.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_company_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<5> scc_info_Company_company_2eproto;
namespace YellowPages {
class SignalDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Signal> _instance;
} _Signal_default_instance_;
}  // namespace YellowPages
static void InitDefaultsscc_info_Signal_signal_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::YellowPages::_Signal_default_instance_;
    new (ptr) ::YellowPages::Signal();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::YellowPages::Signal::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Signal_signal_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsscc_info_Signal_signal_2eproto}, {
      &scc_info_Company_company_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_signal_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_signal_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_signal_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_signal_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::YellowPages::Signal, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::YellowPages::Signal, provider_id_),
  PROTOBUF_FIELD_OFFSET(::YellowPages::Signal, update_date_),
  PROTOBUF_FIELD_OFFSET(::YellowPages::Signal, company_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::YellowPages::Signal)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::YellowPages::_Signal_default_instance_),
};

const char descriptor_table_protodef_signal_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\014signal.proto\022\013YellowPages\032\rcompany.pro"
  "to\"Y\n\006Signal\022\023\n\013provider_id\030\001 \001(\004\022\023\n\013upd"
  "ate_date\030\002 \001(\004\022%\n\007company\030\003 \001(\0132\024.Yellow"
  "Pages.Companyb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_signal_2eproto_deps[1] = {
  &::descriptor_table_company_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_signal_2eproto_sccs[1] = {
  &scc_info_Signal_signal_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_signal_2eproto_once;
static bool descriptor_table_signal_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_signal_2eproto = {
  &descriptor_table_signal_2eproto_initialized, descriptor_table_protodef_signal_2eproto, "signal.proto", 141,
  &descriptor_table_signal_2eproto_once, descriptor_table_signal_2eproto_sccs, descriptor_table_signal_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_signal_2eproto::offsets,
  file_level_metadata_signal_2eproto, 1, file_level_enum_descriptors_signal_2eproto, file_level_service_descriptors_signal_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_signal_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_signal_2eproto), true);
namespace YellowPages {

// ===================================================================

void Signal::InitAsDefaultInstance() {
  ::YellowPages::_Signal_default_instance_._instance.get_mutable()->company_ = const_cast< ::YellowPages::Company*>(
      ::YellowPages::Company::internal_default_instance());
}
class Signal::_Internal {
 public:
  static const ::YellowPages::Company& company(const Signal* msg);
};

const ::YellowPages::Company&
Signal::_Internal::company(const Signal* msg) {
  return *msg->company_;
}
void Signal::clear_company() {
  if (GetArenaNoVirtual() == nullptr && company_ != nullptr) {
    delete company_;
  }
  company_ = nullptr;
}
Signal::Signal()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:YellowPages.Signal)
}
Signal::Signal(const Signal& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_company()) {
    company_ = new ::YellowPages::Company(*from.company_);
  } else {
    company_ = nullptr;
  }
  ::memcpy(&provider_id_, &from.provider_id_,
    static_cast<size_t>(reinterpret_cast<char*>(&update_date_) -
    reinterpret_cast<char*>(&provider_id_)) + sizeof(update_date_));
  // @@protoc_insertion_point(copy_constructor:YellowPages.Signal)
}

void Signal::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Signal_signal_2eproto.base);
  ::memset(&company_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&update_date_) -
      reinterpret_cast<char*>(&company_)) + sizeof(update_date_));
}

Signal::~Signal() {
  // @@protoc_insertion_point(destructor:YellowPages.Signal)
  SharedDtor();
}

void Signal::SharedDtor() {
  if (this != internal_default_instance()) delete company_;
}

void Signal::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Signal& Signal::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Signal_signal_2eproto.base);
  return *internal_default_instance();
}


void Signal::Clear() {
// @@protoc_insertion_point(message_clear_start:YellowPages.Signal)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == nullptr && company_ != nullptr) {
    delete company_;
  }
  company_ = nullptr;
  ::memset(&provider_id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&update_date_) -
      reinterpret_cast<char*>(&provider_id_)) + sizeof(update_date_));
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* Signal::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // uint64 provider_id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          provider_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint64 update_date = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          update_date_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .YellowPages.Company company = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ctx->ParseMessage(mutable_company(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool Signal::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  // @@protoc_insertion_point(parse_start:YellowPages.Signal)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint64 provider_id = 1;
      case 1: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (8 & 0xFF)) {

          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   ::PROTOBUF_NAMESPACE_ID::uint64, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_UINT64>(
                 input, &provider_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 update_date = 2;
      case 2: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (16 & 0xFF)) {

          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   ::PROTOBUF_NAMESPACE_ID::uint64, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_UINT64>(
                 input, &update_date_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .YellowPages.Company company = 3;
      case 3: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (26 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadMessage(
               input, mutable_company()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:YellowPages.Signal)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:YellowPages.Signal)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void Signal::SerializeWithCachedSizes(
    ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:YellowPages.Signal)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 provider_id = 1;
  if (this->provider_id() != 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64(1, this->provider_id(), output);
  }

  // uint64 update_date = 2;
  if (this->update_date() != 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64(2, this->update_date(), output);
  }

  // .YellowPages.Company company = 3;
  if (this->has_company()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, _Internal::company(this), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:YellowPages.Signal)
}

::PROTOBUF_NAMESPACE_ID::uint8* Signal::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:YellowPages.Signal)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 provider_id = 1;
  if (this->provider_id() != 0) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(1, this->provider_id(), target);
  }

  // uint64 update_date = 2;
  if (this->update_date() != 0) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(2, this->update_date(), target);
  }

  // .YellowPages.Company company = 3;
  if (this->has_company()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, _Internal::company(this), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:YellowPages.Signal)
  return target;
}

size_t Signal::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:YellowPages.Signal)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .YellowPages.Company company = 3;
  if (this->has_company()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *company_);
  }

  // uint64 provider_id = 1;
  if (this->provider_id() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
        this->provider_id());
  }

  // uint64 update_date = 2;
  if (this->update_date() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
        this->update_date());
  }

  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Signal::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:YellowPages.Signal)
  GOOGLE_DCHECK_NE(&from, this);
  const Signal* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Signal>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:YellowPages.Signal)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:YellowPages.Signal)
    MergeFrom(*source);
  }
}

void Signal::MergeFrom(const Signal& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:YellowPages.Signal)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_company()) {
    mutable_company()->::YellowPages::Company::MergeFrom(from.company());
  }
  if (from.provider_id() != 0) {
    set_provider_id(from.provider_id());
  }
  if (from.update_date() != 0) {
    set_update_date(from.update_date());
  }
}

void Signal::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:YellowPages.Signal)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Signal::CopyFrom(const Signal& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:YellowPages.Signal)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Signal::IsInitialized() const {
  return true;
}

void Signal::InternalSwap(Signal* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(company_, other->company_);
  swap(provider_id_, other->provider_id_);
  swap(update_date_, other->update_date_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Signal::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace YellowPages
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::YellowPages::Signal* Arena::CreateMaybeMessage< ::YellowPages::Signal >(Arena* arena) {
  return Arena::CreateInternal< ::YellowPages::Signal >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
