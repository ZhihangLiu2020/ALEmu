#pragma once

#include <Poco/Data/MySQL/Connector.h>
#include <Poco/Data/Session.h>
#include <Poco/Data/SessionPool.h>
#include <Poco/Data/SessionPoolContainer.h>

#include <Poco/Data/Statement.h>
#include <Poco/Data/RecordSet.h>

using Poco::Data::Keywords::use;
using Poco::Data::Keywords::now;

using Poco::Data::Session;
using Poco::Data::SessionPool;
using Poco::Data::SessionPoolContainer;

using Poco::Data::Statement;
using Poco::Data::RecordSet;

class AlefDatabase
{
public:
	AlefDatabase();
	AlefDatabase(std::string connectionString);
	~AlefDatabase();

	void createDBSession(std::string connectionString); //Currently only MySQL is supported.
	//void setConnStr(std::string connStr) { connectionString = connStr; }
	Session getDBSession(std::string sessionAlias);

private:
	//Session * dbSession;
	SessionPool * dbSessionPool;
	SessionPoolContainer * dbSessionPoolContainer;

	//std::string connectionString;
	//std::string dbType;
};
