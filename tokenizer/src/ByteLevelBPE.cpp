#include "ByteLevelBPE.h"

namespace nlp::tokenizer {

ByteLevelBPE::ByteLevelBPE() {
    vocab_store_ = std::make_unique<VocabStore>();
}

std::vector<uint32_t> ByteLevelBPE::encode(std::string_view text) const {

}

std::vector<Token> encode_as_tokens(std::string_view text) const {

}

size_t get_vocab_size() const {
    if (!vocab_store_) return 0;
    return vocab_store_->size();
}
    
std::optional<SpecialTokenType> identify_special_token(uint32_t id) const {

}


bool load_from_huggingface(const std::string& json_path) {

}

} // namespace nlp::tokenizer
