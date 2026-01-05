#pragma once

#include <string>
#include <vector>
#include <optional>

#include "ITokenizer.h"

namespace nlp::tokenizers {

class ByteLevelBPE : public ITokenizer {
public:
    ByteLevelBPE();
    ~ByteLevelBPE() override = default;

    virtual std::vector<uint32_t> encode(std::string_view text) const override;

    virtual std::vector<Token> encode_as_tokens(std::string_view text) const override;

    virtual size_t get_vocab_size() const override;
    
    virtual std::optional<SpecialTokenType> identify_special_token(uint32_t id) const override;

    // BPE specific methods.
    bool load_from_huggingface(const std::string& json_path);

private:
    std::unique_ptr<VocabStore> vocab_store_;
};

} // namespace nlp::tokenizer
