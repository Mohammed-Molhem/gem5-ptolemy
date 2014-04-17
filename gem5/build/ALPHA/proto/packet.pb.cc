// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: packet.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "packet.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace Message {

namespace {

const ::google::protobuf::Descriptor* PacketHeader_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PacketHeader_reflection_ = NULL;
const ::google::protobuf::Descriptor* Packet_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Packet_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_packet_2eproto() {
  protobuf_AddDesc_packet_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "packet.proto");
  GOOGLE_CHECK(file != NULL);
  PacketHeader_descriptor_ = file->message_type(0);
  static const int PacketHeader_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PacketHeader, obj_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PacketHeader, ver_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PacketHeader, tick_freq_),
  };
  PacketHeader_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      PacketHeader_descriptor_,
      PacketHeader::default_instance_,
      PacketHeader_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PacketHeader, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PacketHeader, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(PacketHeader));
  Packet_descriptor_ = file->message_type(1);
  static const int Packet_offsets_[6] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Packet, tick_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Packet, cmd_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Packet, addr_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Packet, size_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Packet, flags_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Packet, id_),
  };
  Packet_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Packet_descriptor_,
      Packet::default_instance_,
      Packet_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Packet, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Packet, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Packet));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_packet_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    PacketHeader_descriptor_, &PacketHeader::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Packet_descriptor_, &Packet::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_packet_2eproto() {
  delete PacketHeader::default_instance_;
  delete PacketHeader_reflection_;
  delete Packet::default_instance_;
  delete Packet_reflection_;
}

void protobuf_AddDesc_packet_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\014packet.proto\022\007Message\"A\n\014PacketHeader\022"
    "\016\n\006obj_id\030\001 \002(\t\022\016\n\003ver\030\002 \001(\r:\0010\022\021\n\ttick_"
    "freq\030\003 \002(\004\"Z\n\006Packet\022\014\n\004tick\030\001 \002(\004\022\013\n\003cm"
    "d\030\002 \002(\r\022\014\n\004addr\030\003 \002(\004\022\014\n\004size\030\004 \002(\r\022\r\n\005f"
    "lags\030\005 \001(\r\022\n\n\002id\030\006 \001(\004", 182);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "packet.proto", &protobuf_RegisterTypes);
  PacketHeader::default_instance_ = new PacketHeader();
  Packet::default_instance_ = new Packet();
  PacketHeader::default_instance_->InitAsDefaultInstance();
  Packet::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_packet_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_packet_2eproto {
  StaticDescriptorInitializer_packet_2eproto() {
    protobuf_AddDesc_packet_2eproto();
  }
} static_descriptor_initializer_packet_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int PacketHeader::kObjIdFieldNumber;
const int PacketHeader::kVerFieldNumber;
const int PacketHeader::kTickFreqFieldNumber;
#endif  // !_MSC_VER

PacketHeader::PacketHeader()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void PacketHeader::InitAsDefaultInstance() {
}

PacketHeader::PacketHeader(const PacketHeader& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void PacketHeader::SharedCtor() {
  _cached_size_ = 0;
  obj_id_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ver_ = 0u;
  tick_freq_ = GOOGLE_ULONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PacketHeader::~PacketHeader() {
  SharedDtor();
}

void PacketHeader::SharedDtor() {
  if (obj_id_ != &::google::protobuf::internal::kEmptyString) {
    delete obj_id_;
  }
  if (this != default_instance_) {
  }
}

void PacketHeader::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PacketHeader::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PacketHeader_descriptor_;
}

const PacketHeader& PacketHeader::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_packet_2eproto();
  return *default_instance_;
}

PacketHeader* PacketHeader::default_instance_ = NULL;

PacketHeader* PacketHeader::New() const {
  return new PacketHeader;
}

void PacketHeader::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_obj_id()) {
      if (obj_id_ != &::google::protobuf::internal::kEmptyString) {
        obj_id_->clear();
      }
    }
    ver_ = 0u;
    tick_freq_ = GOOGLE_ULONGLONG(0);
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool PacketHeader::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string obj_id = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_obj_id()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->obj_id().data(), this->obj_id().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_ver;
        break;
      }

      // optional uint32 ver = 2 [default = 0];
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_ver:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &ver_)));
          set_has_ver();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_tick_freq;
        break;
      }

      // required uint64 tick_freq = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_tick_freq:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &tick_freq_)));
          set_has_tick_freq();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void PacketHeader::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string obj_id = 1;
  if (has_obj_id()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->obj_id().data(), this->obj_id().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->obj_id(), output);
  }

  // optional uint32 ver = 2 [default = 0];
  if (has_ver()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->ver(), output);
  }

  // required uint64 tick_freq = 3;
  if (has_tick_freq()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(3, this->tick_freq(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* PacketHeader::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string obj_id = 1;
  if (has_obj_id()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->obj_id().data(), this->obj_id().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->obj_id(), target);
  }

  // optional uint32 ver = 2 [default = 0];
  if (has_ver()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->ver(), target);
  }

  // required uint64 tick_freq = 3;
  if (has_tick_freq()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(3, this->tick_freq(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int PacketHeader::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string obj_id = 1;
    if (has_obj_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->obj_id());
    }

    // optional uint32 ver = 2 [default = 0];
    if (has_ver()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->ver());
    }

    // required uint64 tick_freq = 3;
    if (has_tick_freq()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->tick_freq());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PacketHeader::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const PacketHeader* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const PacketHeader*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void PacketHeader::MergeFrom(const PacketHeader& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_obj_id()) {
      set_obj_id(from.obj_id());
    }
    if (from.has_ver()) {
      set_ver(from.ver());
    }
    if (from.has_tick_freq()) {
      set_tick_freq(from.tick_freq());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void PacketHeader::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PacketHeader::CopyFrom(const PacketHeader& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PacketHeader::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000005) != 0x00000005) return false;

  return true;
}

void PacketHeader::Swap(PacketHeader* other) {
  if (other != this) {
    std::swap(obj_id_, other->obj_id_);
    std::swap(ver_, other->ver_);
    std::swap(tick_freq_, other->tick_freq_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata PacketHeader::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PacketHeader_descriptor_;
  metadata.reflection = PacketHeader_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int Packet::kTickFieldNumber;
const int Packet::kCmdFieldNumber;
const int Packet::kAddrFieldNumber;
const int Packet::kSizeFieldNumber;
const int Packet::kFlagsFieldNumber;
const int Packet::kIdFieldNumber;
#endif  // !_MSC_VER

Packet::Packet()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Packet::InitAsDefaultInstance() {
}

Packet::Packet(const Packet& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Packet::SharedCtor() {
  _cached_size_ = 0;
  tick_ = GOOGLE_ULONGLONG(0);
  cmd_ = 0u;
  addr_ = GOOGLE_ULONGLONG(0);
  size_ = 0u;
  flags_ = 0u;
  id_ = GOOGLE_ULONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Packet::~Packet() {
  SharedDtor();
}

void Packet::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Packet::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Packet::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Packet_descriptor_;
}

const Packet& Packet::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_packet_2eproto();
  return *default_instance_;
}

Packet* Packet::default_instance_ = NULL;

Packet* Packet::New() const {
  return new Packet;
}

void Packet::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    tick_ = GOOGLE_ULONGLONG(0);
    cmd_ = 0u;
    addr_ = GOOGLE_ULONGLONG(0);
    size_ = 0u;
    flags_ = 0u;
    id_ = GOOGLE_ULONGLONG(0);
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Packet::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint64 tick = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &tick_)));
          set_has_tick();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_cmd;
        break;
      }

      // required uint32 cmd = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_cmd:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &cmd_)));
          set_has_cmd();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_addr;
        break;
      }

      // required uint64 addr = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_addr:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &addr_)));
          set_has_addr();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_size;
        break;
      }

      // required uint32 size = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_size:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &size_)));
          set_has_size();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_flags;
        break;
      }

      // optional uint32 flags = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_flags:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &flags_)));
          set_has_flags();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_id;
        break;
      }

      // optional uint64 id = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &id_)));
          set_has_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void Packet::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint64 tick = 1;
  if (has_tick()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->tick(), output);
  }

  // required uint32 cmd = 2;
  if (has_cmd()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->cmd(), output);
  }

  // required uint64 addr = 3;
  if (has_addr()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(3, this->addr(), output);
  }

  // required uint32 size = 4;
  if (has_size()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->size(), output);
  }

  // optional uint32 flags = 5;
  if (has_flags()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->flags(), output);
  }

  // optional uint64 id = 6;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(6, this->id(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Packet::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required uint64 tick = 1;
  if (has_tick()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->tick(), target);
  }

  // required uint32 cmd = 2;
  if (has_cmd()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->cmd(), target);
  }

  // required uint64 addr = 3;
  if (has_addr()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(3, this->addr(), target);
  }

  // required uint32 size = 4;
  if (has_size()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->size(), target);
  }

  // optional uint32 flags = 5;
  if (has_flags()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->flags(), target);
  }

  // optional uint64 id = 6;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(6, this->id(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Packet::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint64 tick = 1;
    if (has_tick()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->tick());
    }

    // required uint32 cmd = 2;
    if (has_cmd()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->cmd());
    }

    // required uint64 addr = 3;
    if (has_addr()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->addr());
    }

    // required uint32 size = 4;
    if (has_size()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->size());
    }

    // optional uint32 flags = 5;
    if (has_flags()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->flags());
    }

    // optional uint64 id = 6;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->id());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Packet::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Packet* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Packet*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Packet::MergeFrom(const Packet& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_tick()) {
      set_tick(from.tick());
    }
    if (from.has_cmd()) {
      set_cmd(from.cmd());
    }
    if (from.has_addr()) {
      set_addr(from.addr());
    }
    if (from.has_size()) {
      set_size(from.size());
    }
    if (from.has_flags()) {
      set_flags(from.flags());
    }
    if (from.has_id()) {
      set_id(from.id());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Packet::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Packet::CopyFrom(const Packet& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Packet::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000000f) != 0x0000000f) return false;

  return true;
}

void Packet::Swap(Packet* other) {
  if (other != this) {
    std::swap(tick_, other->tick_);
    std::swap(cmd_, other->cmd_);
    std::swap(addr_, other->addr_);
    std::swap(size_, other->size_);
    std::swap(flags_, other->flags_);
    std::swap(id_, other->id_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Packet::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Packet_descriptor_;
  metadata.reflection = Packet_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Message

// @@protoc_insertion_point(global_scope)
