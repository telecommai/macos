#ifndef TRANSACTION_H
#define TRANSACTION_H

#include "transactionheader.h"
#include "transactionextension.h"
#include "action.h"
#include <vector>

class Transaction : public TransactionHeader
{
public:
    Transaction();
    virtual ~Transaction() {}

    virtual void serialize(EOSByteWriter* writer) const;
	virtual QJsonValue toJson(QString expiration, int blockNum, int blockPrefix) const;
    virtual void fromJson(const QJsonValue& value);

    void addAction(const Action& action);
    void setActions(const std::vector<Action>& actions);

private:
    std::vector<Action> context_free_action;  // action
    std::vector<Action> actions;
    std::vector<TransactionExtension> transaction_extensions;
};

#endif // TRANSACTION_H
