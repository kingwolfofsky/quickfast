// Copyright (c) 2009, Object Computing, Inc.
// All rights reserved.
// See the file license.txt for licensing information.
#ifdef _MSC_VER
# pragma once
#endif
#ifndef FIELDSEQUENCE_H
#define FIELDSEQUENCE_H
#include <Messages/Field.h>
#include <Messages/FieldSet_fwd.h>
namespace QuickFAST{
  namespace Messages{
    /// @brief A field containing an ordered sequence of groups
    ///
    /// In the XML template file this field is described as &lt;sequence>
    class QuickFAST_Export FieldSequence : public Field{
      /// @brief Construct a field given a sequence for it to contain
      FieldSequence(Messages::SequenceCPtr sequence);
      /// @brief a typical virtual destructor.
      virtual ~FieldSequence();
    public:
      /// @brief Construct a field given a sequence for it to contain
      /// @param file is set to point to the created field
      /// @param sequence the entries for this FieldSequence
      static FieldCPtr create(Messages::SequenceCPtr sequence);
      /// @brief Construct a NULL field (not an empty string)
      /// @param file is set to point to the created field
      static FieldCPtr createNull();

      /// @brief Set the sequence directly(for debugging)
//      void setSequence(Messages::SequenceCPtr sequence);

      // implement selected virtual methods from Field
      virtual Field::FieldType getType()const;
      virtual uint32 toUInt32()const;
      virtual const Messages::SequenceCPtr & toSequence() const;
    private:
      Messages::SequenceCPtr sequence_;
    };
  }
}
#endif // FIELDINT64_H
