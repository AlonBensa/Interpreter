#pragma once
#include "Sequence.h"

class String : public Sequence
{
private:
	std::string _string;
	int findLength() const override;

public:
	String(std::string string, bool isTemp);
	std::string toString() const override;
	std::string getType() const override;

	bool startsWith(std::string prefix, int start = 0, int end = -1) const;
	bool endsWith(std::string suffix, int start = 0, int end = -1) const;
	std::string strip(std::string characters) const;
	std::string lStrip(std::string characters) const;
	std::string rStrip(std::string characters) const;
	int find(std::string sub, int start = 0, int end = -1) const;
	int rFind(std::string sub, int start = 0, int end = -1) const;
	std::string lJust(int length, char fillChar) const;
	std::string rJust(int length, char fillChar) const;
	int index(std::string sub, int start = 0, int end = -1) const;
	std::string rIndex(std::string sub, int start = 0, int end = -1) const;
	Type* partition(std::string separator) const;
	Type* rPartition(std::string separator) const;
	Type* split(std::string separator, int maxSplit) const;
	Type* rSplit(std::string separator, int maxSplit) const;
	Type* splitLines() const;
	std::string lower() const;
	std::string upper() const;
	std::string format(std::string value) const;
	std::string formatMap(Type* dict) const;

	bool isAlNum() const;
	bool isAlpha() const;
	bool isNumeric() const;
	bool isIdentifier() const;
	bool isLower() const;
	bool isSpace() const;
	bool isTitle() const;
	bool isUpper() const;

	Type* makeTrans(std::string charactersToBeReplaced, std::string charactersToReplace, std::string charactersToBeRemoved) const;
	std::string replace(std::string oldStr, std::string newStr, int count) const;
	int count(std::string sub, int start = 0, int end = -1);
	std::string center(int length, char fillChar) const;
	std::string expandTabs(int tabSize) const;
	std::string translate(Type* table) const;
	std::string join(Type* iterable) const;
	std::string capitalize() const;
	std::string swapCase() const;
	std::string title() const;
	std::string zFill() const;
};