#ifndef __UTILS_H__
#define __UTILS_H__

/**
 * \struct Word
 * \brief Represent a single word.
 */
struct Word {
    char* content;                  /*<! The word itself. */
};
typedef struct Word Word;

void initWord(Word* word, const char* content);
void destroyWord(Word* word);

/**
 * \struct Sentence
 * \breif Represent a sentence as a set of word.
 */
struct Sentence {
    Word* words;                    /*!< The words of the sentence. */
    unsigned char wordsCount;       /*!< How many words there's in the sentence. */
};
typedef struct Sentence Sentence;

void initSentence(Sentence* sentence, Word* words, unsigned char wordsCount);
void destroySentence(Sentence* sentence);

struct Dict {
    struct Dict* subdicts;                 /*!< 26 sub ditionnary */
    Word* words;                   /*!< Words contained at this stage. */
    unsigned int wordsCount;
};
typedef struct Dict Dict;

void initDict(Dict* dict, const char* filePath);
void destroyDict(Dict* dict);

#endif // __UTILS_H__