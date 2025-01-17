/**
 * spoonacular API
 * The spoonacular Nutrition, Recipe, and Food API allows you to access over 380,000 recipes, thousands of ingredients, 800,000 food products, and 100,000 menu items. Our food ontology and semantic recipe search engine makes it possible to search for recipes using natural language queries, such as \"gluten free brownies without sugar\" or \"low fat vegan cupcakes.\" You can automatically calculate the nutritional information for any recipe, analyze recipe costs, visualize ingredient lists, find recipes for what's in your fridge, find recipes based on special diets, nutritional requirements, or favorite ingredients, classify recipes into types and cuisines, convert ingredient amounts, or even compute an entire meal plan. With our powerful API, you can create many kinds of food and especially nutrition apps.  Special diets/dietary requirements currently available include: vegan, vegetarian, pescetarian, gluten free, grain free, dairy free, high protein, whole 30, low sodium, low carb, Paleo, ketogenic, FODMAP, and Primal.
 *
 * The version of the OpenAPI document: 1.1
 * Contact: mail@spoonacular.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIGenerateShoppingList_request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIGenerateShoppingList_request::OAIGenerateShoppingList_request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIGenerateShoppingList_request::OAIGenerateShoppingList_request() {
    this->initializeModel();
}

OAIGenerateShoppingList_request::~OAIGenerateShoppingList_request() {}

void OAIGenerateShoppingList_request::initializeModel() {

    m_username_isSet = false;
    m_username_isValid = false;

    m_start_date_isSet = false;
    m_start_date_isValid = false;

    m_end_date_isSet = false;
    m_end_date_isValid = false;

    m_hash_isSet = false;
    m_hash_isValid = false;
}

void OAIGenerateShoppingList_request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIGenerateShoppingList_request::fromJsonObject(QJsonObject json) {

    m_username_isValid = ::OpenAPI::fromJsonValue(username, json[QString("username")]);
    m_username_isSet = !json[QString("username")].isNull() && m_username_isValid;

    m_start_date_isValid = ::OpenAPI::fromJsonValue(start_date, json[QString("start-date")]);
    m_start_date_isSet = !json[QString("start-date")].isNull() && m_start_date_isValid;

    m_end_date_isValid = ::OpenAPI::fromJsonValue(end_date, json[QString("end-date")]);
    m_end_date_isSet = !json[QString("end-date")].isNull() && m_end_date_isValid;

    m_hash_isValid = ::OpenAPI::fromJsonValue(hash, json[QString("hash")]);
    m_hash_isSet = !json[QString("hash")].isNull() && m_hash_isValid;
}

QString OAIGenerateShoppingList_request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIGenerateShoppingList_request::asJsonObject() const {
    QJsonObject obj;
    if (m_username_isSet) {
        obj.insert(QString("username"), ::OpenAPI::toJsonValue(username));
    }
    if (m_start_date_isSet) {
        obj.insert(QString("start-date"), ::OpenAPI::toJsonValue(start_date));
    }
    if (m_end_date_isSet) {
        obj.insert(QString("end-date"), ::OpenAPI::toJsonValue(end_date));
    }
    if (m_hash_isSet) {
        obj.insert(QString("hash"), ::OpenAPI::toJsonValue(hash));
    }
    return obj;
}

QString OAIGenerateShoppingList_request::getUsername() const {
    return username;
}
void OAIGenerateShoppingList_request::setUsername(const QString &username) {
    this->username = username;
    this->m_username_isSet = true;
}

bool OAIGenerateShoppingList_request::is_username_Set() const{
    return m_username_isSet;
}

bool OAIGenerateShoppingList_request::is_username_Valid() const{
    return m_username_isValid;
}

QString OAIGenerateShoppingList_request::getStartDate() const {
    return start_date;
}
void OAIGenerateShoppingList_request::setStartDate(const QString &start_date) {
    this->start_date = start_date;
    this->m_start_date_isSet = true;
}

bool OAIGenerateShoppingList_request::is_start_date_Set() const{
    return m_start_date_isSet;
}

bool OAIGenerateShoppingList_request::is_start_date_Valid() const{
    return m_start_date_isValid;
}

QString OAIGenerateShoppingList_request::getEndDate() const {
    return end_date;
}
void OAIGenerateShoppingList_request::setEndDate(const QString &end_date) {
    this->end_date = end_date;
    this->m_end_date_isSet = true;
}

bool OAIGenerateShoppingList_request::is_end_date_Set() const{
    return m_end_date_isSet;
}

bool OAIGenerateShoppingList_request::is_end_date_Valid() const{
    return m_end_date_isValid;
}

QString OAIGenerateShoppingList_request::getHash() const {
    return hash;
}
void OAIGenerateShoppingList_request::setHash(const QString &hash) {
    this->hash = hash;
    this->m_hash_isSet = true;
}

bool OAIGenerateShoppingList_request::is_hash_Set() const{
    return m_hash_isSet;
}

bool OAIGenerateShoppingList_request::is_hash_Valid() const{
    return m_hash_isValid;
}

bool OAIGenerateShoppingList_request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_username_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_start_date_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_end_date_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_hash_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIGenerateShoppingList_request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_username_isValid && m_start_date_isValid && m_end_date_isValid && m_hash_isValid && true;
}

} // namespace OpenAPI
