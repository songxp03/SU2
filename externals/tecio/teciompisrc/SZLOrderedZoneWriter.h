 #pragma once
#include "ThirdPartyHeadersBegin.h"
#include <boost/shared_ptr.hpp>
#include "ThirdPartyHeadersEnd.h"
#include "ClassMacros.h"
#include "IJKZoneInfo.h"
#include "SZLOrderedZoneHeaderWriter.h"
#include "ZoneWriterAbstract.h"
namespace tecplot { namespace ___3933 { class ___1352; class ___1881; class ItemSetIterator; class SZLOrderedZoneWriter : public ___4709 { UNCOPYABLE_CLASS(SZLOrderedZoneWriter) public: SZLOrderedZoneWriter( ItemSetIterator&                            varIter, ___4636                                 zone, ___4636                                 ___341, std::vector<___372> const&               ___4564, ___372                                   ___4499, ___37&                                 ___36, boost::shared_ptr<___1881 const> const& ijkZoneInfo); virtual ~SZLOrderedZoneWriter(); static uint64_t fieldDataSubzoneHeaderFileSize(bool ___2002); protected: SZLOrderedZoneHeaderWriter m_headerWriter; boost::shared_ptr<___1881 const> const m_ijkZoneInfo; void setZoneNumberLabel(std::string const& zoneNumberLabel); private: std::string m_zoneNumberLabel; ___1392 ___2673; virtual uint64_t zoneConnectivityFileSize(bool ___2002); virtual uint64_t zoneDataFileSize(bool ___2002); virtual uint64_t zoneHeaderFileSize(bool ___2002); virtual ___372 writeZoneConnectivity(FileWriterInterface& szpltFile); virtual ___372 writeZoneData(FileWriterInterface& szpltFile); virtual ___372 writeZoneHeader(FileWriterInterface& szpltFile); ___372 calculateVarSubzoneMinMaxes(___4352 ___4336, ___2481& nszDataMinMax, ___2481& cszDataMinMax); ___372 ___4512(FileWriterInterface& file, ValueLocation_e ___4326, ___4352 ___4336, ___2090::SubzoneOffset_t ___3880); template<typename T, bool isBitArray> ___372 ___4496(FileWriterInterface& szpltFile, ___1352 const& ___1351, ___2090::SubzoneOffset_t ___469); template<typename T, bool isBitArray> ___372 ___4531(FileWriterInterface& szpltFile, ___1352 const& ___1351, ___1844 const& storedIJK, ___2090::SubzoneOffset_t ___2734); template <typename T, bool isBitArray> uint64_t cellSubzoneFieldDataFileSize(bool ___2002, ___2090::SubzoneOffset_t ___469) const; template <typename T, bool isBitArray> uint64_t nodeSubzoneFieldDataFileSize(bool ___2002, ___2090::SubzoneOffset_t ___2734) const; template <typename T, bool isBitArray> uint64_t subzoneFieldDataFileSize(bool ___2002, ___2090::SubzoneOffset_t ___3880, ValueLocation_e ___4326) const; template <typename T, bool isBitArray> ___372 writeVariable(FileWriterInterface& szpltFile, ___4352 const ___4336, ___2481 const& nszDataMinMax, ___2481 const& cszDataMinMax); template <typename T, bool isBitArray> uint64_t variableFileSize(bool ___2002, ValueLocation_e ___4326); template<typename T, bool isBitArray> ___372 ___1779( ___1352 const& ___1351, ___1844 const&       ___1880, ___1844 const&       ___1852, ___1844 const&       ___1861, ___2240<T>& ___4299); }; }}
