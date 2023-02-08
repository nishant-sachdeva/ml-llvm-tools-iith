// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: RegisterAllocation.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_RegisterAllocation_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_RegisterAllocation_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3013000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3013000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_RegisterAllocation_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_RegisterAllocation_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[4]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_RegisterAllocation_2eproto;
namespace registerallocation {
class ColorData;
class ColorDataDefaultTypeInternal;
extern ColorDataDefaultTypeInternal _ColorData_default_instance_;
class Empty;
class EmptyDefaultTypeInternal;
extern EmptyDefaultTypeInternal _Empty_default_instance_;
class GraphList;
class GraphListDefaultTypeInternal;
extern GraphListDefaultTypeInternal _GraphList_default_instance_;
class Path;
class PathDefaultTypeInternal;
extern PathDefaultTypeInternal _Path_default_instance_;
}  // namespace registerallocation
PROTOBUF_NAMESPACE_OPEN
template<> ::registerallocation::ColorData* Arena::CreateMaybeMessage<::registerallocation::ColorData>(Arena*);
template<> ::registerallocation::Empty* Arena::CreateMaybeMessage<::registerallocation::Empty>(Arena*);
template<> ::registerallocation::GraphList* Arena::CreateMaybeMessage<::registerallocation::GraphList>(Arena*);
template<> ::registerallocation::Path* Arena::CreateMaybeMessage<::registerallocation::Path>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace registerallocation {

// ===================================================================

class Path PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:registerallocation.Path) */ {
 public:
  inline Path() : Path(nullptr) {}
  virtual ~Path();

  Path(const Path& from);
  Path(Path&& from) noexcept
    : Path() {
    *this = ::std::move(from);
  }

  inline Path& operator=(const Path& from) {
    CopyFrom(from);
    return *this;
  }
  inline Path& operator=(Path&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Path& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Path* internal_default_instance() {
    return reinterpret_cast<const Path*>(
               &_Path_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Path& a, Path& b) {
    a.Swap(&b);
  }
  inline void Swap(Path* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Path* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Path* New() const final {
    return CreateMaybeMessage<Path>(nullptr);
  }

  Path* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Path>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Path& from);
  void MergeFrom(const Path& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Path* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "registerallocation.Path";
  }
  protected:
  explicit Path(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_RegisterAllocation_2eproto);
    return ::descriptor_table_RegisterAllocation_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kIRPathFieldNumber = 1,
    kSeedEmbPathFieldNumber = 2,
  };
  // string IRPath = 1;
  void clear_irpath();
  const std::string& irpath() const;
  void set_irpath(const std::string& value);
  void set_irpath(std::string&& value);
  void set_irpath(const char* value);
  void set_irpath(const char* value, size_t size);
  std::string* mutable_irpath();
  std::string* release_irpath();
  void set_allocated_irpath(std::string* irpath);
  private:
  const std::string& _internal_irpath() const;
  void _internal_set_irpath(const std::string& value);
  std::string* _internal_mutable_irpath();
  public:

  // string SeedEmbPath = 2;
  void clear_seedembpath();
  const std::string& seedembpath() const;
  void set_seedembpath(const std::string& value);
  void set_seedembpath(std::string&& value);
  void set_seedembpath(const char* value);
  void set_seedembpath(const char* value, size_t size);
  std::string* mutable_seedembpath();
  std::string* release_seedembpath();
  void set_allocated_seedembpath(std::string* seedembpath);
  private:
  const std::string& _internal_seedembpath() const;
  void _internal_set_seedembpath(const std::string& value);
  std::string* _internal_mutable_seedembpath();
  public:

  // @@protoc_insertion_point(class_scope:registerallocation.Path)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr irpath_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr seedembpath_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_RegisterAllocation_2eproto;
};
// -------------------------------------------------------------------

class GraphList PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:registerallocation.GraphList) */ {
 public:
  inline GraphList() : GraphList(nullptr) {}
  virtual ~GraphList();

  GraphList(const GraphList& from);
  GraphList(GraphList&& from) noexcept
    : GraphList() {
    *this = ::std::move(from);
  }

  inline GraphList& operator=(const GraphList& from) {
    CopyFrom(from);
    return *this;
  }
  inline GraphList& operator=(GraphList&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const GraphList& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GraphList* internal_default_instance() {
    return reinterpret_cast<const GraphList*>(
               &_GraphList_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(GraphList& a, GraphList& b) {
    a.Swap(&b);
  }
  inline void Swap(GraphList* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(GraphList* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline GraphList* New() const final {
    return CreateMaybeMessage<GraphList>(nullptr);
  }

  GraphList* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<GraphList>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const GraphList& from);
  void MergeFrom(const GraphList& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(GraphList* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "registerallocation.GraphList";
  }
  protected:
  explicit GraphList(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_RegisterAllocation_2eproto);
    return ::descriptor_table_RegisterAllocation_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPayloadFieldNumber = 1,
  };
  // bytes payload = 1;
  void clear_payload();
  const std::string& payload() const;
  void set_payload(const std::string& value);
  void set_payload(std::string&& value);
  void set_payload(const char* value);
  void set_payload(const void* value, size_t size);
  std::string* mutable_payload();
  std::string* release_payload();
  void set_allocated_payload(std::string* payload);
  private:
  const std::string& _internal_payload() const;
  void _internal_set_payload(const std::string& value);
  std::string* _internal_mutable_payload();
  public:

  // @@protoc_insertion_point(class_scope:registerallocation.GraphList)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr payload_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_RegisterAllocation_2eproto;
};
// -------------------------------------------------------------------

class ColorData PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:registerallocation.ColorData) */ {
 public:
  inline ColorData() : ColorData(nullptr) {}
  virtual ~ColorData();

  ColorData(const ColorData& from);
  ColorData(ColorData&& from) noexcept
    : ColorData() {
    *this = ::std::move(from);
  }

  inline ColorData& operator=(const ColorData& from) {
    CopyFrom(from);
    return *this;
  }
  inline ColorData& operator=(ColorData&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const ColorData& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ColorData* internal_default_instance() {
    return reinterpret_cast<const ColorData*>(
               &_ColorData_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(ColorData& a, ColorData& b) {
    a.Swap(&b);
  }
  inline void Swap(ColorData* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ColorData* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ColorData* New() const final {
    return CreateMaybeMessage<ColorData>(nullptr);
  }

  ColorData* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ColorData>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ColorData& from);
  void MergeFrom(const ColorData& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ColorData* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "registerallocation.ColorData";
  }
  protected:
  explicit ColorData(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_RegisterAllocation_2eproto);
    return ::descriptor_table_RegisterAllocation_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kIrpathFieldNumber = 1,
    kPayloadFieldNumber = 2,
  };
  // string irpath = 1;
  void clear_irpath();
  const std::string& irpath() const;
  void set_irpath(const std::string& value);
  void set_irpath(std::string&& value);
  void set_irpath(const char* value);
  void set_irpath(const char* value, size_t size);
  std::string* mutable_irpath();
  std::string* release_irpath();
  void set_allocated_irpath(std::string* irpath);
  private:
  const std::string& _internal_irpath() const;
  void _internal_set_irpath(const std::string& value);
  std::string* _internal_mutable_irpath();
  public:

  // bytes payload = 2;
  void clear_payload();
  const std::string& payload() const;
  void set_payload(const std::string& value);
  void set_payload(std::string&& value);
  void set_payload(const char* value);
  void set_payload(const void* value, size_t size);
  std::string* mutable_payload();
  std::string* release_payload();
  void set_allocated_payload(std::string* payload);
  private:
  const std::string& _internal_payload() const;
  void _internal_set_payload(const std::string& value);
  std::string* _internal_mutable_payload();
  public:

  // @@protoc_insertion_point(class_scope:registerallocation.ColorData)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr irpath_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr payload_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_RegisterAllocation_2eproto;
};
// -------------------------------------------------------------------

class Empty PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:registerallocation.Empty) */ {
 public:
  inline Empty() : Empty(nullptr) {}
  virtual ~Empty();

  Empty(const Empty& from);
  Empty(Empty&& from) noexcept
    : Empty() {
    *this = ::std::move(from);
  }

  inline Empty& operator=(const Empty& from) {
    CopyFrom(from);
    return *this;
  }
  inline Empty& operator=(Empty&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Empty& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Empty* internal_default_instance() {
    return reinterpret_cast<const Empty*>(
               &_Empty_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  friend void swap(Empty& a, Empty& b) {
    a.Swap(&b);
  }
  inline void Swap(Empty* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Empty* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Empty* New() const final {
    return CreateMaybeMessage<Empty>(nullptr);
  }

  Empty* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Empty>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Empty& from);
  void MergeFrom(const Empty& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Empty* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "registerallocation.Empty";
  }
  protected:
  explicit Empty(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_RegisterAllocation_2eproto);
    return ::descriptor_table_RegisterAllocation_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:registerallocation.Empty)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_RegisterAllocation_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Path

// string IRPath = 1;
inline void Path::clear_irpath() {
  irpath_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& Path::irpath() const {
  // @@protoc_insertion_point(field_get:registerallocation.Path.IRPath)
  return _internal_irpath();
}
inline void Path::set_irpath(const std::string& value) {
  _internal_set_irpath(value);
  // @@protoc_insertion_point(field_set:registerallocation.Path.IRPath)
}
inline std::string* Path::mutable_irpath() {
  // @@protoc_insertion_point(field_mutable:registerallocation.Path.IRPath)
  return _internal_mutable_irpath();
}
inline const std::string& Path::_internal_irpath() const {
  return irpath_.Get();
}
inline void Path::_internal_set_irpath(const std::string& value) {
  
  irpath_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void Path::set_irpath(std::string&& value) {
  
  irpath_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:registerallocation.Path.IRPath)
}
inline void Path::set_irpath(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  irpath_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:registerallocation.Path.IRPath)
}
inline void Path::set_irpath(const char* value,
    size_t size) {
  
  irpath_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:registerallocation.Path.IRPath)
}
inline std::string* Path::_internal_mutable_irpath() {
  
  return irpath_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* Path::release_irpath() {
  // @@protoc_insertion_point(field_release:registerallocation.Path.IRPath)
  return irpath_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Path::set_allocated_irpath(std::string* irpath) {
  if (irpath != nullptr) {
    
  } else {
    
  }
  irpath_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), irpath,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:registerallocation.Path.IRPath)
}

// string SeedEmbPath = 2;
inline void Path::clear_seedembpath() {
  seedembpath_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& Path::seedembpath() const {
  // @@protoc_insertion_point(field_get:registerallocation.Path.SeedEmbPath)
  return _internal_seedembpath();
}
inline void Path::set_seedembpath(const std::string& value) {
  _internal_set_seedembpath(value);
  // @@protoc_insertion_point(field_set:registerallocation.Path.SeedEmbPath)
}
inline std::string* Path::mutable_seedembpath() {
  // @@protoc_insertion_point(field_mutable:registerallocation.Path.SeedEmbPath)
  return _internal_mutable_seedembpath();
}
inline const std::string& Path::_internal_seedembpath() const {
  return seedembpath_.Get();
}
inline void Path::_internal_set_seedembpath(const std::string& value) {
  
  seedembpath_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void Path::set_seedembpath(std::string&& value) {
  
  seedembpath_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:registerallocation.Path.SeedEmbPath)
}
inline void Path::set_seedembpath(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  seedembpath_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:registerallocation.Path.SeedEmbPath)
}
inline void Path::set_seedembpath(const char* value,
    size_t size) {
  
  seedembpath_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:registerallocation.Path.SeedEmbPath)
}
inline std::string* Path::_internal_mutable_seedembpath() {
  
  return seedembpath_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* Path::release_seedembpath() {
  // @@protoc_insertion_point(field_release:registerallocation.Path.SeedEmbPath)
  return seedembpath_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Path::set_allocated_seedembpath(std::string* seedembpath) {
  if (seedembpath != nullptr) {
    
  } else {
    
  }
  seedembpath_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), seedembpath,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:registerallocation.Path.SeedEmbPath)
}

// -------------------------------------------------------------------

// GraphList

// bytes payload = 1;
inline void GraphList::clear_payload() {
  payload_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& GraphList::payload() const {
  // @@protoc_insertion_point(field_get:registerallocation.GraphList.payload)
  return _internal_payload();
}
inline void GraphList::set_payload(const std::string& value) {
  _internal_set_payload(value);
  // @@protoc_insertion_point(field_set:registerallocation.GraphList.payload)
}
inline std::string* GraphList::mutable_payload() {
  // @@protoc_insertion_point(field_mutable:registerallocation.GraphList.payload)
  return _internal_mutable_payload();
}
inline const std::string& GraphList::_internal_payload() const {
  return payload_.Get();
}
inline void GraphList::_internal_set_payload(const std::string& value) {
  
  payload_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void GraphList::set_payload(std::string&& value) {
  
  payload_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:registerallocation.GraphList.payload)
}
inline void GraphList::set_payload(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  payload_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:registerallocation.GraphList.payload)
}
inline void GraphList::set_payload(const void* value,
    size_t size) {
  
  payload_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:registerallocation.GraphList.payload)
}
inline std::string* GraphList::_internal_mutable_payload() {
  
  return payload_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* GraphList::release_payload() {
  // @@protoc_insertion_point(field_release:registerallocation.GraphList.payload)
  return payload_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void GraphList::set_allocated_payload(std::string* payload) {
  if (payload != nullptr) {
    
  } else {
    
  }
  payload_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), payload,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:registerallocation.GraphList.payload)
}

// -------------------------------------------------------------------

// ColorData

// string irpath = 1;
inline void ColorData::clear_irpath() {
  irpath_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& ColorData::irpath() const {
  // @@protoc_insertion_point(field_get:registerallocation.ColorData.irpath)
  return _internal_irpath();
}
inline void ColorData::set_irpath(const std::string& value) {
  _internal_set_irpath(value);
  // @@protoc_insertion_point(field_set:registerallocation.ColorData.irpath)
}
inline std::string* ColorData::mutable_irpath() {
  // @@protoc_insertion_point(field_mutable:registerallocation.ColorData.irpath)
  return _internal_mutable_irpath();
}
inline const std::string& ColorData::_internal_irpath() const {
  return irpath_.Get();
}
inline void ColorData::_internal_set_irpath(const std::string& value) {
  
  irpath_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void ColorData::set_irpath(std::string&& value) {
  
  irpath_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:registerallocation.ColorData.irpath)
}
inline void ColorData::set_irpath(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  irpath_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:registerallocation.ColorData.irpath)
}
inline void ColorData::set_irpath(const char* value,
    size_t size) {
  
  irpath_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:registerallocation.ColorData.irpath)
}
inline std::string* ColorData::_internal_mutable_irpath() {
  
  return irpath_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* ColorData::release_irpath() {
  // @@protoc_insertion_point(field_release:registerallocation.ColorData.irpath)
  return irpath_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void ColorData::set_allocated_irpath(std::string* irpath) {
  if (irpath != nullptr) {
    
  } else {
    
  }
  irpath_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), irpath,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:registerallocation.ColorData.irpath)
}

// bytes payload = 2;
inline void ColorData::clear_payload() {
  payload_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& ColorData::payload() const {
  // @@protoc_insertion_point(field_get:registerallocation.ColorData.payload)
  return _internal_payload();
}
inline void ColorData::set_payload(const std::string& value) {
  _internal_set_payload(value);
  // @@protoc_insertion_point(field_set:registerallocation.ColorData.payload)
}
inline std::string* ColorData::mutable_payload() {
  // @@protoc_insertion_point(field_mutable:registerallocation.ColorData.payload)
  return _internal_mutable_payload();
}
inline const std::string& ColorData::_internal_payload() const {
  return payload_.Get();
}
inline void ColorData::_internal_set_payload(const std::string& value) {
  
  payload_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void ColorData::set_payload(std::string&& value) {
  
  payload_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:registerallocation.ColorData.payload)
}
inline void ColorData::set_payload(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  payload_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:registerallocation.ColorData.payload)
}
inline void ColorData::set_payload(const void* value,
    size_t size) {
  
  payload_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:registerallocation.ColorData.payload)
}
inline std::string* ColorData::_internal_mutable_payload() {
  
  return payload_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* ColorData::release_payload() {
  // @@protoc_insertion_point(field_release:registerallocation.ColorData.payload)
  return payload_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void ColorData::set_allocated_payload(std::string* payload) {
  if (payload != nullptr) {
    
  } else {
    
  }
  payload_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), payload,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:registerallocation.ColorData.payload)
}

// -------------------------------------------------------------------

// Empty

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace registerallocation

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_RegisterAllocation_2eproto
