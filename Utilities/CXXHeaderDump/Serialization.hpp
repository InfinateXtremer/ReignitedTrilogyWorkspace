#ifndef UE4SS_SDK_Serialization_HPP
#define UE4SS_SDK_Serialization_HPP

struct FStructSerializerArrayTestStruct
{
    TArray<int32> Int32Array;                                                         // 0x0000 (size: 0x10)
    int32 StaticSingleElement;                                                        // 0x0010 (size: 0x4)
    int32 StaticInt32Array;                                                           // 0x0014 (size: 0xC)
    float StaticFloatArray;                                                           // 0x0020 (size: 0xC)
    TArray<FVector> VectorArray;                                                      // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FStructSerializerBooleanTestStruct
{
    bool BoolFalse;                                                                   // 0x0000 (size: 0x1)
    bool BoolTrue;                                                                    // 0x0001 (size: 0x1)
    uint32 Bitfield;                                                                  // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FStructSerializerBuiltinTestStruct
{
    FGuid Guid;                                                                       // 0x0000 (size: 0x10)
    FName Name;                                                                       // 0x0010 (size: 0x8)
    FString String;                                                                   // 0x0018 (size: 0x10)
    FRotator Rotator;                                                                 // 0x0028 (size: 0xC)
    FText Text;                                                                       // 0x0038 (size: 0x18)
    FVector Vector;                                                                   // 0x0050 (size: 0xC)

}; // Size: 0x60

struct FStructSerializerMapTestStruct
{
    TMap<int32, FString> IntToStr;                                                    // 0x0000 (size: 0x50)
    TMap<class FString, class FString> StrToStr;                                      // 0x0050 (size: 0x50)
    TMap<class FString, class FVector> StrToVec;                                      // 0x00A0 (size: 0x50)

}; // Size: 0xF0

struct FStructSerializerNumericTestStruct
{
    int8 Int8;                                                                        // 0x0000 (size: 0x1)
    int16 Int16;                                                                      // 0x0002 (size: 0x2)
    int32 Int32;                                                                      // 0x0004 (size: 0x4)
    int64 Int64;                                                                      // 0x0008 (size: 0x8)
    uint8 UInt8;                                                                      // 0x0010 (size: 0x1)
    uint16 UInt16;                                                                    // 0x0012 (size: 0x2)
    uint32 UInt32;                                                                    // 0x0014 (size: 0x4)
    uint64 UInt64;                                                                    // 0x0018 (size: 0x8)
    float Float;                                                                      // 0x0020 (size: 0x4)
    double Double;                                                                    // 0x0028 (size: 0x8)

}; // Size: 0x30

struct FStructSerializerObjectTestStruct
{
    UClass* Class;                                                                    // 0x0000 (size: 0x8)
    class UObject* ObjectPtr;                                                         // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FStructSerializerTestStruct
{
    FStructSerializerNumericTestStruct Numerics;                                      // 0x0000 (size: 0x30)
    FStructSerializerBooleanTestStruct Booleans;                                      // 0x0030 (size: 0x8)
    FStructSerializerObjectTestStruct Objects;                                        // 0x0038 (size: 0x10)
    FStructSerializerBuiltinTestStruct Builtins;                                      // 0x0048 (size: 0x60)
    FStructSerializerArrayTestStruct Arrays;                                          // 0x00A8 (size: 0x40)
    FStructSerializerMapTestStruct Maps;                                              // 0x00E8 (size: 0xF0)

}; // Size: 0x1D8

#endif
