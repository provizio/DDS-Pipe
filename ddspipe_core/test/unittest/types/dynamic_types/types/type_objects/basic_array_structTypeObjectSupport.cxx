// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file basic_array_structTypeObjectSupport.cxx
 * Source file containing the implementation to register the TypeObject representation of the described types in the IDL file
 *
 * This file was generated by the tool fastddsgen.
 */

#include "basic_array_structTypeObjectSupport.hpp"

#include <mutex>
#include <string>

#include <fastcdr/xcdr/external.hpp>
#include <fastcdr/xcdr/optional.hpp>
#include <fastdds/dds/domain/DomainParticipantFactory.hpp>
#include <fastdds/dds/log/Log.hpp>
#include <fastdds/dds/xtypes/common.hpp>
#include <fastdds/dds/xtypes/type_representation/ITypeObjectRegistry.hpp>
#include <fastdds/dds/xtypes/type_representation/TypeObject.hpp>
#include <fastdds/dds/xtypes/type_representation/TypeObjectUtils.hpp>

#include "basic_array_struct.hpp"


using namespace eprosima::fastdds::dds::xtypes;

// TypeIdentifier is returned by reference: dependent structures/unions are registered in this same method
void register_TheOtherObjectInArray_type_identifier(
        TypeIdentifierPair& type_ids_TheOtherObjectInArray)
{

    ReturnCode_t return_code_TheOtherObjectInArray {eprosima::fastdds::dds::RETCODE_OK};
    return_code_TheOtherObjectInArray =
        eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
        "TheOtherObjectInArray", type_ids_TheOtherObjectInArray);
    if (eprosima::fastdds::dds::RETCODE_OK != return_code_TheOtherObjectInArray)
    {
        StructTypeFlag struct_flags_TheOtherObjectInArray = TypeObjectUtils::build_struct_type_flag(eprosima::fastdds::dds::xtypes::ExtensibilityKind::APPENDABLE,
                false, false);
        QualifiedTypeName type_name_TheOtherObjectInArray = "TheOtherObjectInArray";
        eprosima::fastcdr::optional<AppliedBuiltinTypeAnnotations> type_ann_builtin_TheOtherObjectInArray;
        eprosima::fastcdr::optional<AppliedAnnotationSeq> ann_custom_TheOtherObjectInArray;
        CompleteTypeDetail detail_TheOtherObjectInArray = TypeObjectUtils::build_complete_type_detail(type_ann_builtin_TheOtherObjectInArray, ann_custom_TheOtherObjectInArray, type_name_TheOtherObjectInArray.to_string());
        CompleteStructHeader header_TheOtherObjectInArray;
        header_TheOtherObjectInArray = TypeObjectUtils::build_complete_struct_header(TypeIdentifier(), detail_TheOtherObjectInArray);
        CompleteStructMemberSeq member_seq_TheOtherObjectInArray;
        {
            TypeIdentifierPair type_ids_some_num;
            ReturnCode_t return_code_some_num {eprosima::fastdds::dds::RETCODE_OK};
            return_code_some_num =
                eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
                "_int32_t", type_ids_some_num);

            if (eprosima::fastdds::dds::RETCODE_OK != return_code_some_num)
            {
                EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                        "some_num Structure member TypeIdentifier unknown to TypeObjectRegistry.");
                return;
            }
            StructMemberFlag member_flags_some_num = TypeObjectUtils::build_struct_member_flag(eprosima::fastdds::dds::xtypes::TryConstructFailAction::DISCARD,
                    false, false, false, false);
            MemberId member_id_some_num = 0x00000000;
            bool common_some_num_ec {false};
            CommonStructMember common_some_num {TypeObjectUtils::build_common_struct_member(member_id_some_num, member_flags_some_num, TypeObjectUtils::retrieve_complete_type_identifier(type_ids_some_num, common_some_num_ec))};
            if (!common_some_num_ec)
            {
                EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION, "Structure some_num member TypeIdentifier inconsistent.");
                return;
            }
            MemberName name_some_num = "some_num";
            eprosima::fastcdr::optional<AppliedBuiltinMemberAnnotations> member_ann_builtin_some_num;
            ann_custom_TheOtherObjectInArray.reset();
            CompleteMemberDetail detail_some_num = TypeObjectUtils::build_complete_member_detail(name_some_num, member_ann_builtin_some_num, ann_custom_TheOtherObjectInArray);
            CompleteStructMember member_some_num = TypeObjectUtils::build_complete_struct_member(common_some_num, detail_some_num);
            TypeObjectUtils::add_complete_struct_member(member_seq_TheOtherObjectInArray, member_some_num);
        }
        {
            TypeIdentifierPair type_ids_positive;
            ReturnCode_t return_code_positive {eprosima::fastdds::dds::RETCODE_OK};
            return_code_positive =
                eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
                "_bool", type_ids_positive);

            if (eprosima::fastdds::dds::RETCODE_OK != return_code_positive)
            {
                EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                        "positive Structure member TypeIdentifier unknown to TypeObjectRegistry.");
                return;
            }
            StructMemberFlag member_flags_positive = TypeObjectUtils::build_struct_member_flag(eprosima::fastdds::dds::xtypes::TryConstructFailAction::DISCARD,
                    false, false, false, false);
            MemberId member_id_positive = 0x00000001;
            bool common_positive_ec {false};
            CommonStructMember common_positive {TypeObjectUtils::build_common_struct_member(member_id_positive, member_flags_positive, TypeObjectUtils::retrieve_complete_type_identifier(type_ids_positive, common_positive_ec))};
            if (!common_positive_ec)
            {
                EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION, "Structure positive member TypeIdentifier inconsistent.");
                return;
            }
            MemberName name_positive = "positive";
            eprosima::fastcdr::optional<AppliedBuiltinMemberAnnotations> member_ann_builtin_positive;
            ann_custom_TheOtherObjectInArray.reset();
            CompleteMemberDetail detail_positive = TypeObjectUtils::build_complete_member_detail(name_positive, member_ann_builtin_positive, ann_custom_TheOtherObjectInArray);
            CompleteStructMember member_positive = TypeObjectUtils::build_complete_struct_member(common_positive, detail_positive);
            TypeObjectUtils::add_complete_struct_member(member_seq_TheOtherObjectInArray, member_positive);
        }
        CompleteStructType struct_type_TheOtherObjectInArray = TypeObjectUtils::build_complete_struct_type(struct_flags_TheOtherObjectInArray, header_TheOtherObjectInArray, member_seq_TheOtherObjectInArray);
        if (eprosima::fastdds::dds::RETCODE_BAD_PARAMETER ==
                TypeObjectUtils::build_and_register_struct_type_object(struct_type_TheOtherObjectInArray, type_name_TheOtherObjectInArray.to_string(), type_ids_TheOtherObjectInArray))
        {
            EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                    "TheOtherObjectInArray already registered in TypeObjectRegistry for a different type.");
        }
    }
}
// TypeIdentifier is returned by reference: dependent structures/unions are registered in this same method
void register_basic_array_struct_type_identifier(
        TypeIdentifierPair& type_ids_basic_array_struct)
{

    ReturnCode_t return_code_basic_array_struct {eprosima::fastdds::dds::RETCODE_OK};
    return_code_basic_array_struct =
        eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
        "basic_array_struct", type_ids_basic_array_struct);
    if (eprosima::fastdds::dds::RETCODE_OK != return_code_basic_array_struct)
    {
        StructTypeFlag struct_flags_basic_array_struct = TypeObjectUtils::build_struct_type_flag(eprosima::fastdds::dds::xtypes::ExtensibilityKind::APPENDABLE,
                false, false);
        QualifiedTypeName type_name_basic_array_struct = "basic_array_struct";
        eprosima::fastcdr::optional<AppliedBuiltinTypeAnnotations> type_ann_builtin_basic_array_struct;
        eprosima::fastcdr::optional<AppliedAnnotationSeq> ann_custom_basic_array_struct;
        CompleteTypeDetail detail_basic_array_struct = TypeObjectUtils::build_complete_type_detail(type_ann_builtin_basic_array_struct, ann_custom_basic_array_struct, type_name_basic_array_struct.to_string());
        CompleteStructHeader header_basic_array_struct;
        header_basic_array_struct = TypeObjectUtils::build_complete_struct_header(TypeIdentifier(), detail_basic_array_struct);
        CompleteStructMemberSeq member_seq_basic_array_struct;
        {
            TypeIdentifierPair type_ids_index;
            ReturnCode_t return_code_index {eprosima::fastdds::dds::RETCODE_OK};
            return_code_index =
                eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
                "_uint32_t", type_ids_index);

            if (eprosima::fastdds::dds::RETCODE_OK != return_code_index)
            {
                EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                        "index Structure member TypeIdentifier unknown to TypeObjectRegistry.");
                return;
            }
            StructMemberFlag member_flags_index = TypeObjectUtils::build_struct_member_flag(eprosima::fastdds::dds::xtypes::TryConstructFailAction::DISCARD,
                    false, false, false, false);
            MemberId member_id_index = 0x00000000;
            bool common_index_ec {false};
            CommonStructMember common_index {TypeObjectUtils::build_common_struct_member(member_id_index, member_flags_index, TypeObjectUtils::retrieve_complete_type_identifier(type_ids_index, common_index_ec))};
            if (!common_index_ec)
            {
                EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION, "Structure index member TypeIdentifier inconsistent.");
                return;
            }
            MemberName name_index = "index";
            eprosima::fastcdr::optional<AppliedBuiltinMemberAnnotations> member_ann_builtin_index;
            ann_custom_basic_array_struct.reset();
            CompleteMemberDetail detail_index = TypeObjectUtils::build_complete_member_detail(name_index, member_ann_builtin_index, ann_custom_basic_array_struct);
            CompleteStructMember member_index = TypeObjectUtils::build_complete_struct_member(common_index, detail_index);
            TypeObjectUtils::add_complete_struct_member(member_seq_basic_array_struct, member_index);
        }
        {
            TypeIdentifierPair type_ids_sub_structs;
            ReturnCode_t return_code_sub_structs {eprosima::fastdds::dds::RETCODE_OK};
            return_code_sub_structs =
                eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
                "anonymous_array_TheOtherObjectInArray_5", type_ids_sub_structs);

            if (eprosima::fastdds::dds::RETCODE_OK != return_code_sub_structs)
            {
                return_code_sub_structs =
                    eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
                    "TheOtherObjectInArray", type_ids_sub_structs);

                if (eprosima::fastdds::dds::RETCODE_OK != return_code_sub_structs)
                {
                ::register_TheOtherObjectInArray_type_identifier(type_ids_sub_structs);
                }
                bool element_identifier_anonymous_array_TheOtherObjectInArray_5_ec {false};
                TypeIdentifier* element_identifier_anonymous_array_TheOtherObjectInArray_5 {new TypeIdentifier(TypeObjectUtils::retrieve_complete_type_identifier(type_ids_sub_structs, element_identifier_anonymous_array_TheOtherObjectInArray_5_ec))};
                if (!element_identifier_anonymous_array_TheOtherObjectInArray_5_ec)
                {
                    EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION, "Array element TypeIdentifier inconsistent.");
                    return;
                }
                EquivalenceKind equiv_kind_anonymous_array_TheOtherObjectInArray_5 = EK_COMPLETE;
                if (TK_NONE == type_ids_sub_structs.type_identifier2()._d())
                {
                    equiv_kind_anonymous_array_TheOtherObjectInArray_5 = EK_BOTH;
                }
                CollectionElementFlag element_flags_anonymous_array_TheOtherObjectInArray_5 = 0;
                PlainCollectionHeader header_anonymous_array_TheOtherObjectInArray_5 = TypeObjectUtils::build_plain_collection_header(equiv_kind_anonymous_array_TheOtherObjectInArray_5, element_flags_anonymous_array_TheOtherObjectInArray_5);
                {
                    SBoundSeq array_bound_seq;
                        TypeObjectUtils::add_array_dimension(array_bound_seq, static_cast<SBound>(5));

                    PlainArraySElemDefn array_sdefn = TypeObjectUtils::build_plain_array_s_elem_defn(header_anonymous_array_TheOtherObjectInArray_5, array_bound_seq,
                                eprosima::fastcdr::external<TypeIdentifier>(element_identifier_anonymous_array_TheOtherObjectInArray_5));
                    if (eprosima::fastdds::dds::RETCODE_BAD_PARAMETER ==
                            TypeObjectUtils::build_and_register_s_array_type_identifier(array_sdefn, "anonymous_array_TheOtherObjectInArray_5", type_ids_sub_structs))
                    {
                        EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                            "anonymous_array_TheOtherObjectInArray_5 already registered in TypeObjectRegistry for a different type.");
                    }
                }
            }
            StructMemberFlag member_flags_sub_structs = TypeObjectUtils::build_struct_member_flag(eprosima::fastdds::dds::xtypes::TryConstructFailAction::DISCARD,
                    false, false, false, false);
            MemberId member_id_sub_structs = 0x00000001;
            bool common_sub_structs_ec {false};
            CommonStructMember common_sub_structs {TypeObjectUtils::build_common_struct_member(member_id_sub_structs, member_flags_sub_structs, TypeObjectUtils::retrieve_complete_type_identifier(type_ids_sub_structs, common_sub_structs_ec))};
            if (!common_sub_structs_ec)
            {
                EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION, "Structure sub_structs member TypeIdentifier inconsistent.");
                return;
            }
            MemberName name_sub_structs = "sub_structs";
            eprosima::fastcdr::optional<AppliedBuiltinMemberAnnotations> member_ann_builtin_sub_structs;
            ann_custom_basic_array_struct.reset();
            CompleteMemberDetail detail_sub_structs = TypeObjectUtils::build_complete_member_detail(name_sub_structs, member_ann_builtin_sub_structs, ann_custom_basic_array_struct);
            CompleteStructMember member_sub_structs = TypeObjectUtils::build_complete_struct_member(common_sub_structs, detail_sub_structs);
            TypeObjectUtils::add_complete_struct_member(member_seq_basic_array_struct, member_sub_structs);
        }
        CompleteStructType struct_type_basic_array_struct = TypeObjectUtils::build_complete_struct_type(struct_flags_basic_array_struct, header_basic_array_struct, member_seq_basic_array_struct);
        if (eprosima::fastdds::dds::RETCODE_BAD_PARAMETER ==
                TypeObjectUtils::build_and_register_struct_type_object(struct_type_basic_array_struct, type_name_basic_array_struct.to_string(), type_ids_basic_array_struct))
        {
            EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                    "basic_array_struct already registered in TypeObjectRegistry for a different type.");
        }
    }
}

